
#include <stdio.h>
#include <stdbool.h>
#define formatLineLength 60

char* readWord(char* word, char* line){
    // if *word == " ", 跳过直到不是
    // 如果*word == '字母'，看现在已经赋值了多少个字母，如果已经>=10
    // 将word[9] == '*'， 跳转word直到是空格
    // 如果*word == '\0'，直接返回'\0'

    const char* p = word;
    bool flag = false;
    while (*line)
    {
        if (*line == ' ' && !flag)
        {
            // jump to not ' '
            line++;
            continue;
        }
        // 超过word的限制
        if (p - word >= 10)
        {
            word[9] = '*';
            // jump to ' ' or '\0'
            while (*line != ' ' && *line != '\0')
            {
                line++;
            }
            return line;
        } else {
            flag = true;
            *word++ = *line++;
        }
        return line; 
    }
    
}
int main()
{
    char line[100];
    char word[10];
    char formatLine[formatLineLength + 1];
    FILE* fp;
    fp = fopen("quote", "r");
    if (!fp)
    {
        printf("can't open the file");
    }

    while (fgets(line, sizeof(line), fp) != NULL)
    {
        // 读到一行带有\0的字符串line
        // 从中取出第一个单词
        char* p = readWord(word, line);
        // 放入formatLine
        // 将指针A移动到
    }
    
    

}