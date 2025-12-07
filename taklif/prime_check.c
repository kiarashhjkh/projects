#include <stdio.h>

int main() {
    int input;
    int primecheck = 0;
    scanf("%d", &input);
    while (input < 0) {
        printf("invalid input");
        scanf("%d", &input);
    }
    if (input == 0 || input == 1) {
        printf("not prime");
        return 1;
    }
    for (int i = 2; i < input; i++) {
        if (input % i == 0) { primecheck++; }
    }
    if (primecheck == 0) {
        printf("prime");
    }
    else {
        printf(" not prime");
    }
    return 0;
}
