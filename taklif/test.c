#include <stdio.h>
#include <math.h>

int fac(int n) {
    if (n == 0) {
        return 1;
    }
        return n * fac(n - 1);
}

int main() {
    int x, n;
    double sum = 0;
    scanf("%d %d", &x, &n);
    while (n >= 0) {
        sum += pow(x, n) / fac(n);
        n--;
    }
    printf("%.4lf", sum);
    return 0;
}
