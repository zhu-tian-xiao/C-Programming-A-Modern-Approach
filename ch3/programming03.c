// Books are identified by an International Standard Book Number (ISBN). ISBNs assigned
// after January 1, 2007 contain 13 digits, arranged in five groups, such as 978-0-393-97950-3.
// (Older ISBNs use 10 digits.) The first group (the GS1 prefix) is currently either 978 or 979.
// The group identifier specifies the language or country of origin (for example, 0 and 1 are
// used in English-speaking countries). The publisher code identifies the publisher (393 is the
// code for W. W. Norton). The item number is assigned by the publisher to identify a specific
// book (97950 is the code for this book). An ISBN ends with a check digit that’s used to verify
// the accuracy of the preceding digits. Write a program that breaks down an ISBN entered by
// the user:
/**
 * 关于这里的isbn码
 * 978表示这是一本书
 * group identifier表示地区， 7是中国
 * publisher code是出版社代码，由各国分配
 * item number是书号    
 * 最后一个是校验位，计算如下
 * 978-7-121-20038-0
 * 9 * 1 + 7 * 3 + 8 * 1 + 7 * 3 +
 * 1 * 1 + 2 * 3 + 1 * 1 + 2 * 3 +
 * 0 * 1 + 0 * 3 + 3 * 1 + 8 * 3 = 100
 * 
 * r = 100 % 10 = 0 
 * check digit = (10 - r) % 10 = 0
 */
#include <stdio.h>

int main(void) {
  int prefix, group, publisher, item, check_digit;

  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &prefix, &group, &publisher, &item, &check_digit);

  printf("GS1 prefix: %d\n", prefix);
  printf("Group identifier: %d\n", group);
  printf("Publisher code: %d\n", publisher);
  printf("Item number: %d\n", item);
  printf("Check digit: %d\n", check_digit);

  /* The five printf calls can be combined as follows:

     printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n",
            prefix, group, publisher, item, check_digit);
  */

  return 0;
}