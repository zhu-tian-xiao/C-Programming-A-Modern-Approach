#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SENTENCE_LEN 30
#define WORD_LEN 20

int readSentence(char (*sentence)[WORD_LEN + 1]);
void printSentence(char (*sentence)[WORD_LEN + 1], int lastLocation);
void printReverseSentence(char (*sentence)[WORD_LEN + 1], int lastLocation);
int main() {
    printf("Enter a sentence: ");
    char sentence[SENTENCE_LEN][WORD_LEN + 1] = {0};
    int lastLocation = readSentence(sentence);
    // printSentence(sentence, lastLocation);
    printf("Reversal of sentence: ");
    printReverseSentence(sentence, lastLocation);
}

int readSentence(char (*sentence)[WORD_LEN + 1]) {

    char (*s)[WORD_LEN + 1] = sentence;
    char buffer[WORD_LEN * SENTENCE_LEN + 2];
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0';
    
    char *p = buffer;

    int insertLocation = 0;
    while (*p) {
        if (*p != ' ' && *p != '?') {
            (*sentence)[insertLocation++] = *p;
        } else {
            (*sentence)[insertLocation] = '\0';
            insertLocation = 0;
            sentence++;
        }
        p++;
    }
    return sentence - s;
}

void printSentence(char (*sentence)[WORD_LEN + 1], int lastLocation) {
    for (int i = 0; i < lastLocation; i++) {
        printf("%s\n", sentence[i]);
    }
}


void printReverseSentence(char (*sentence)[WORD_LEN + 1], int lastLocation) {
    for (int i = lastLocation; i > 1; i--) {
        printf("%s ", sentence[i - 1]);
    }
    printf("%s?\n", sentence[0]);
}