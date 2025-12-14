#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define NUM_CARDS 5
#define NUM_RANKS 13
#define NUM_SUITS 4
bool badCard;
int ranks[NUM_RANKS] = {0};
int suits[NUM_SUITS] = {0};
bool cardExists[NUM_RANKS][NUM_SUITS] = {false};
bool four, three;
int pairs;
bool flush;
bool straight;

void getRank(int* rank);
void getSuit(int* suit);

void readCards();
void analyzeHand();
void printResult();
int main() {
  for (;;) {
    readCards();
    analyzeHand();
    printResult();
  }
}

void getRank(int* rank) {
  char rankRead;
  while ((rankRead = getchar()) == '\n');
  switch (rankRead) {
    case '0':
      exit(EXIT_SUCCESS);
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      *rank = rankRead - '2';
      break;
    case 't':
      *rank = 8;
      break;
    case 'j':
      *rank = 9;
      break;
    case 'q':
      *rank = 10;
      break;
    case 'k':
      *rank = 11;
      break;
    case 'a':
      *rank = 12;
      break;
    default:
      badCard = true;
      break;
  }
}

void getSuit(int* suit) {
  char suitRead;
  while ((suitRead = getchar()) == '\n');
  switch (suitRead) {
    case 'c':
      *suit = 0;
      break;
    case 'd':
      *suit = 1;
      break;
    case 'h':
      *suit = 2;
      break;
    case 's':
      *suit = 3;
      break;
    default:
      badCard = true;
      break;
  }
}

void readCards() {
  for (int i = 0; i < NUM_RANKS; i++) {
    ranks[i] = 0;
  }

  for (int i = 0; i < NUM_SUITS; i++) {
    suits[i] = 0;
  }

  for (int i = 0; i < NUM_RANKS; i++) {
    for (int j = 0; j < NUM_SUITS; j++) {
      cardExists[i][j] = false;
    }
  }

  int i = 0;
  while (i < NUM_CARDS) {
    printf("Enter a card: ");

    int rank, suit;
    badCard = false;
    getRank(&rank);
    getSuit(&suit);

    while (getchar() != '\n') {
      badCard = true;
      // 下面的一行可以省略
      while (getchar() != '\n');
      break;
    }

    if (badCard) {
      printf("Bad card; ignored.\n");
      continue;
    } else if (cardExists[rank][suit]) {
      printf("Duplicate card; ignored.\n");
      continue;
    } else {
      ranks[rank]++;
      suits[suit]++;
      cardExists[rank][suit] = true;
      // for (int i = 0; i < 13; i++) {
      //   printf("%d ", ranks[i]);
      // }
      // printf("\n");
      // for (int i = 0; i < 4; i++) {
      //   printf("%d ", suits[i]);
      // }
      // printf("\n");
    }
    i++;
  }
}

void analyzeHand() {
  // 检测四个，三个，对子情况
  four = false;
  three = false;
  pairs = 0;
  for (int i = 0; i < NUM_RANKS; i++) {
    if (ranks[i] == 4) {
      four = true;
    } else if (ranks[i] == 3) {
      three = true;
    } else if (ranks[i] == 2) {
      pairs++;
    }
  }

  // 检测同花
  flush = false;
  for (int i = 0; i < NUM_SUITS; i++) {
    if (suits[i] == 5) {
      flush = true;
    }
  }

  // 检测顺子
  straight = false;
  int count = 0;
  int i = 0;
  for (; i < NUM_RANKS; i++) {
    if (ranks[i]) {
      break;
    }
  }
  for (; i < NUM_RANKS && ranks[i] > 0; i++) {
    count++;
    // ace-low straight
    if (count == 4 && i == 3 && ranks[12] > 0) {
      straight = true;
      break;
    }
  }
  if (count == 5) {
    straight = true;
  }
}

void printResult() {
  if (four) {
    printf("four-of-a-kind:四个\n");
  } else if (three && pairs == 1) {
    printf("full house:三带一对\n");
  } else if (three) {
    printf("three-of-a-kind:三个\n");
  } else if (pairs == 2) {
    printf("two pairs:两对\n");
  } else if (pairs == 1) {
    printf("pair:一对\n");
  } else if (straight && flush) {
    printf("straight and flush:同花顺\n");
  } else if (straight) {
    printf("straight:顺子\n");
  } else if (flush) {
    printf("flush:同花\n");
  } else {
    printf("high card:高牌\n");
  }
  printf("\n");
}