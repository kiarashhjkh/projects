#include <stdio.h>

int main() {
    int n;
    printf("give me an n :");
    scanf("%d", &n);
    int temp = n;
    int stars = n / 2;
    for (temp; temp > 0; temp--) {
        n = temp - 1;
        for (int i = 0; i < stars; i++) {
            for (n; n > 0; n--) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
