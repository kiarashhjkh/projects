#include <stdio.h>

int main() {
    int m, n;
    printf("give me two numbers : \n");
    scanf("%d %d",&m,&n);
    printf("here is the table :\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m;j++ ) {
            printf("%d     ",i*j);
            if (j == m) {
                printf("\n");
            }
        }

    }
    return 0;
}
