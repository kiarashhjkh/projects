#include <stdio.h>

int main() {
    int input;
    int digits = 0, reHex = 0;//reverse hex
    printf("give me a number :\n");
    scanf("%d", &input);
    if (input==0) {
        printf("0");
    }
    while (input > 0) {
        int remainder = input % 16;
        reHex = reHex * 16 + remainder;
        input /= 16;
        digits++;
    }
    while (digits > 0) {
        int remainder = reHex % 16;
        if (remainder < 10) {
            printf("%c", '0' + remainder);
        } else {
            printf("%c", '0' + (remainder + 7));
        }
        reHex /= 16;
        digits--;
    }

    return 0;
}
