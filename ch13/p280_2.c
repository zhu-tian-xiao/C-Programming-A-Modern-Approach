#include <stdio.h>
char digit_to_hex_char(int digit) 
{
    return "0123456789ABCDEF"[digit];
}

int main() {
    printf("%c", digit_to_hex_char(0));
    printf("%c", digit_to_hex_char(1));
    printf("%c", digit_to_hex_char(2));
    printf("%c", digit_to_hex_char(3));

}