
#include "word.h"
#include "line.h"
int main() {
  char word[WORD_MAX_LEN + 2];
  clear_line();
  for(;;) {
    int word_length = read_word(word, WORD_MAX_LEN + 1);
    // 如果读取到word_length = 0，说明已经读到eof
    if (word_length == 0) {
      flush_line();
      return 0;
    }

    if (word_length + 1 > space_remaining()) {
      write_line();
      clear_line();
    }
    append_word(word);
  }
}