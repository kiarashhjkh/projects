#include <stdio.h>

int main() {
    int dec;
    int bin = 0, rem = 0;
    int place = 1;
    printf("give me a decimal number : \n");
    scanf("%d", &dec);
    while (dec > 0) {
        rem = dec % 2;
        dec = dec / 2;
        bin += rem * place;
        place *= 10;
    }
    printf("%d",bin);
    return 0;
}
