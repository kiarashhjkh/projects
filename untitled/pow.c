#include <stdio.h>

double pow(double x, long int n) {   double output = 1;

    if (n < 0) {
        x = 1 / x;
        n = -n;
    }

    if (n % 2 == 0) {
        x = x * x;
        while (n > 0) {
            output = output * x;
            n = n - 2;
        }
    } else {
        n = n - 1;
        double y = x;
        x = x * x;
        while (n > 0) {
            output = output * x;
            n = n - 2;
        }
        output = output * y;
    }
    return output;
}

int main() {
    printf("%lf", pow(35, 3));
    return 0;
}
