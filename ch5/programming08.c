// 这个版本写的过于复杂了
// FINISH
#include <stdio.h>
#include <stdlib.h>
#define N 8

void printInformation(int location[], char *departureTime[], char *arrivalTime[])
{
    if (location[0] < 0 || location[1] < 0)
    {
        printf("wrong location\n");
        exit(EXIT_FAILURE);
    }

    if (location[0] && location[1])
    {
        printf("\nThere are 2 same closest departure time.\n..........................................\n");
    }
    
    
    printf("Closest departure time is %s, arriving at %s\n", departureTime[location[0]], arrivalTime[location[0]]);
    if (location[1] != 0)
    {
        printf("Closest departure time is %s, arriving at %s\n", departureTime[location[1]], arrivalTime[location[1]]);
    }
    
}
int main()
{
    int departureTimeDigit[N] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    char *departureTime[N] = {"8:00 a.m.", "9:43 a.m.", "11:19 a.m.", "12:47 p.m.", "2:00 p.m.", "3:45 p.m.", "7:00 p.m.", "9:45 p.m."};
    char *arrivalTime[N] = {"10:16 a.m.", "11:52 a.m.", "1:31 p.m.", "3:00 p.m.", "4:08 p.m.", "5:55 p.m.", "9:20 p.m.", "11:58 p.m."};

    printf("Enter a 24-hour time: ");
    int hour, minute;
    scanf("%d :%d", &hour, &minute);
    int userTime = hour * 60 + minute;
    
    int lastMargin = __INT_MAX__;

    int i;
    for (i = 0; i < N; i++)
    {
        int margin = abs(userTime - departureTimeDigit[i]);
        if (margin < lastMargin)
        {
            lastMargin = margin;
        } else if (margin > lastMargin)
        {
            printInformation((int[]){i - 1, 0}, departureTime, arrivalTime);
            break;
        } else {
            printInformation((int[]){i - 1, i}, departureTime, arrivalTime);
            break;
        }
    }
    if (i == N)
    {
        printInformation((int[]){N - 1, 0}, departureTime, arrivalTime);
    }
    
    

}