// FINISH
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