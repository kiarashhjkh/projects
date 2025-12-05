#include <stdio.h>

int main() {
    int n;
    int digi = 0, reHex = 0;
    printf("give me a number :\n");
    scanf("%d", &n);
    if (n==0) {
        printf("0");
    }
    while (n > 0) {
        int rem = n % 16;
        reHex = reHex * 16 + rem;
        n /= 16;
        digi++;
    }
    while (digi > 0) {
        int rem = reHex % 16;
        if (rem < 10) {
            printf("%c", '0' + rem);
        } else {
            printf("%c", '0' + (rem + 7));
        }
        reHex /= 16;
        digi--;
    }

    return 0;
}
