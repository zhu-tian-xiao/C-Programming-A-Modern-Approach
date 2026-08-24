// Consider the following program:
// #include <stdio.h>
// int main(void)
// {
// printf("Parkinson's Law:\nWork expands so as to ");
// printf("fill the time\n");
// printf("available for its completion.\n");
// return 0;
// }
// (a) Identify the directives and statements in this program.
// (b) What output does the program produce?

// (a) The program contains one directive (#include) and four statements (three calls of printf and one return).
// (b) The program will print the next three lines: 
// Parkinson's Law:
// Work expands so as to fill the time
// available for its completion.
#include <stdio.h>
int main(void)
{
  printf("Parkinson's Law:\nWork expands so as to ");
  printf("fill the time\n");
  printf("available for its completion.\n");
  return 0;
}