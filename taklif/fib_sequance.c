#include <stdio.h>

int fib(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main() {
    int length;
    scanf(" %d",&length);
    while (length < 3) {
        printf("length must be greater than 3");
        scanf(" %d",&length);
    }
    for (int i = 0; i < length; i++) {
        printf("%d", fib(i));
        if (i != length - 1) { printf(","); } else { printf("\n"); }
    }
    return 0;
}
