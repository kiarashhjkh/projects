#include <stdio.h>

int main() {
    int n, m, k;
    printf("give me n :");
    scanf(" %d", &n);
    printf("give me m :");
    scanf(" %d", &m);
    printf("give me k :");
    scanf(" %d", &k);
    int start = 1;
    int starter = 1;
    for (int i = 1; i < k; i++) {
        start *= 10;
    }
    int end = start * 10 - 1;
    for (int i = start; i <= end; i++) {
        int temp = i;
        int valid = 1;
        int repChecker[10] = {0};
        int digiCount = 0;
        while (temp > 0) {
            int tempDigi = temp % 10;
            if (tempDigi < n || tempDigi > m) {
                valid = 0;
                break;
            }
            if (repChecker[tempDigi] == 1) {
                valid = 0;
                break;
            }
            repChecker[tempDigi] = 1;
            temp /= 10;
            digiCount++;
        }
        if (digiCount != k) {
            valid = 0;
        }
        if (valid == 1) {
            if (starter == 1) { printf("%d", i); } else { printf("-%d",i); }
            starter=0;
        }
    }
    return 0;
}
