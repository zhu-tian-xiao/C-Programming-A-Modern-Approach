#include <stdio.h>
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int* start, int* end)
{
    if (end - start <= 1)
    {
        return;
    }
    int* returnFirst = start;
    int* returnEnd = end;

    while (start < end -1)
    {
        if (*start > *(start + 1))
        {
            swap(start, start + 1);
        }
        start++;
    }
    selectionSort(returnFirst, returnEnd - 1);
    
}
int main()
{
    int arr[1000] = {0}; // 预留最大容量
    int end = 0;

    while (scanf("%d", &arr[end]) == 1)
    {
        end++;
    }
    selectionSort(arr, &arr[end]);

    int* first = arr;
    while (*first)
    {
        printf("%d ", *first++);
    }
    


    
}