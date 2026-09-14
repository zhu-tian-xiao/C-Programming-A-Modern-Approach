#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* prototypes */

void initialize_number_generator(void);
enum difficulty select_difficulty(void);
int new_secret_number(enum difficulty difficulty);
void read_guesses(int secret_number);

enum difficulty { EASY = 50 , MEDIUM = 100, HARD = 200};

int main(void) {
  char command;
  int secret_number;

  initialize_number_generator();

  do {
    enum difficulty difficulty = select_difficulty();
    secret_number = new_secret_number(difficulty);
    printf("Guess the secret number between 1 and %d.\n\n", difficulty);

    printf("A new number has been chosen.\n");
    read_guesses(secret_number);
    printf("\nPlay again? (Y/N) ");
    scanf(" %c", &command);
    while (getchar() != '\n');
    putchar('\n');
  } while (command == 'y' || command == 'Y');
}

/**
 * use srand to intialize number generator
 */
void initialize_number_generator(void) { srand((unsigned)time(NULL)); }

/**
 * generate a new number for guess.
 */
int new_secret_number(enum difficulty difficulty) { return rand() % difficulty +1; }

void read_guesses(int secret_number) {
  int guess_number;
  int guess_count = 0;
  do {
    printf("Enter guess: ");

    if (scanf("%d", &guess_number) != 1) {
      printf("Wrong guess number format; try again\n");
      while (getchar() != '\n');
      continue;
    }
    while (getchar() != '\n');

    guess_count++;
    if (guess_number < secret_number) {
      printf("Too low; try again.\n");
    } else if (guess_number > secret_number) {
      printf("Too high; try again.\n");
    } else {
      printf("You won in %d guesses.\n", guess_count);
      return;
    }
  } while (1);
}

enum difficulty select_difficulty(void) {
  int difficulty;
  printf("Select difficulty\n\n");

  printf("1. Easy (1-%d)\n", EASY);
  printf("2. Medium (1-%d)\n", MEDIUM);
  printf("3. Hard (1-%d)\n\n", HARD);

  scanf("%d", &difficulty);
  putchar('\n');
  switch (difficulty) {
    case 1:
      return EASY;
      break;
    case 2:
      return MEDIUM;
      break;
    case 3:
      return HARD;
    default:
      break;
  }
}