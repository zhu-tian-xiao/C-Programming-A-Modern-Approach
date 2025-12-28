// FINISH
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
int main()
{
    int prefix = 0;
    int groupIdentifier = 0;
    int publisherCode = 0;
    int itemNumber = 0;
    int checkDigit = 0;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &groupIdentifier, &publisherCode, &itemNumber, &checkDigit);
    printf("GS1 prefix: %d\n", prefix);
    printf("Group identifier: %d\n", groupIdentifier);
    printf("Publisher code: %d\n", publisherCode);
    printf("Item number: %d\n", itemNumber);
    printf("Check digit: %d\n", checkDigit);
}