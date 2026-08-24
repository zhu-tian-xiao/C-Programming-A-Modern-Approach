// show how float is used
#include <stdio.h>
int main() {
    // 1. float默认是6位小数
    // 2. float保存的数值是大约的，不精确的
    // float profit = 20.13445434648;
    float profit = 20.134;
    printf("profit: %.2f\n", profit); 
    printf("profit: %f\n", profit);
    printf("profit: %d\n", profit);
}