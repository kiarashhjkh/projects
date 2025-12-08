#include <stdio.h>

int main() {
    int input;
    scanf("%d", &input);
    int primeMaker = 2;
    int primeChecker = 0;
    if (input <= 1) {
        printf("no prime numbers ");
        return 1;
    }
    if (input == 2) {
        printf("2");
        return 2;
    }
    while (primeMaker <= input) {
        for (int i = 2; i < primeMaker; i++) {
            if (primeMaker % i == 0) {
                primeChecker++;
            }
        }
        if (primeChecker == 0) {
            printf("%d\n", primeMaker);
        }
        primeChecker = 0;
        primeMaker++;
    }


    return 0;
}
