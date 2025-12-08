
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define formatLineLength 60
#define wordMaxLength 10
/**
 * 读取word并且返回line下一个待读取的位置
 */
char *readWord(char *word, char *line)
{

    const char *p = word;
    bool flag = false;
    while (*line)
    {
        if (*line == ' ' && !flag)
        {
            line++;
            continue;
        }
        if (*line == ' ' && flag)
        {
            *word = '\0';
            return line;
        }

        if (word - p < 10)
        {
            flag = true;
            *word++ = *line++;
            continue;
        }

        // 超过word的限制
        if (word - p >= 10)
        {
            *word = '\0';
            *(word - 1) = '*';
            // jump to ' ' or '\0'
            while (*line != ' ' && *line)
            {
                line++;
            }
            return line;
        }
    }
    *word = '\0';
    return line;
}

void printFormatArticle(char (*formatArticle)[formatLineLength + 1], char (*formatArticleEnd)[formatLineLength + 1])
{
    while (formatArticle <= formatArticleEnd)
    {
        printf("%s\n", *formatArticle);
        formatArticle++;
    }
    
}

int main()
{
    char line[100];
    char word[wordMaxLength + 1];
    char formatLine[formatLineLength + 1];
    char formatArticle[20][formatLineLength + 1];
    FILE *fp;
    fp = fopen("quote", "r");
    if (!fp)
    {
        printf("can't open the file");
    }

    char* formatLineNext = formatLine;
    const char* formatLineEnd = formatLine + formatLineLength;
    char (*formatArticleNext)[formatLineLength + 1] = formatArticle;
    bool first = true;
    while (fgets(line, sizeof(line), fp) != NULL)
    {
        line[strcspn(line, "\r\n")] = '\0';
        printf("%s\n", line);
        char *p = line;
        while ((p = readWord(word, p)))
        {
            printf("%s\n", word);

            if (formatLineEnd - formatLineNext < sizeof(word))
            {
                // formatLine[formatLineLength] = '\0';
                strcpy(*formatArticleNext, formatLine);
                formatLineNext = formatLine;

                formatArticleNext++;
                strncpy(formatLineNext, word, sizeof(word));
                formatLineNext += strlen(word);
            } else {
                if (first)
                {
                    strncpy(formatLineNext, word, sizeof(word));
                    first = false;
                    formatLineNext += strlen(word);
                } else {
                    *formatLineNext++ = ' ';
                    strncpy(formatLineNext, word, sizeof(word));
                    formatLineNext += strlen(word);
                }
            }
            
            if (!*p)
            {
                break;
            }
            
        }
        memset(line, 0, sizeof(line));
    }
    strcpy(*formatArticleNext, formatLine);

    printf("..................\n");
    printFormatArticle(formatArticle, formatArticleNext);
}