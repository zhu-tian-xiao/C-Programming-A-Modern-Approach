#include <stdio.h>
#include <stdbool.h>
void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);
int main()
{
    int counts1[26];
    int counts2[26];
    read_word(counts1);
    read_word(counts2);
    equal_array(counts1, counts2) ? printf("same words\n"): printf("not same words\n");

}

void read_word(int counts[26])
{
    // 清空
    for (int i = 0; i < 26; i++)
    {
        counts[i] = 0;
    }
    
    printf("Enter a word: ");
    char ch;
    while ((ch = getchar()) != '\n')
    {
        counts[ch - 97]++;
    }
}

bool equal_array(int counts1[26], int counts2[26]){
    for (int i = 0; i < 26; i++)
    {
        if (counts1[i] != counts2[i]) {
            return false;
        }
    }
    return true;
}