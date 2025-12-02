#include <stdbool.h>
#include <stdio.h>

bool powerOfTwo(int k) {
    int y = 0;
    while (k > 0) {
        y += k % 2;

        k = k / 2;
    }
    if (y == 1) {
        return true;
    }
    return false;
}

int main() {
    printf("it is %d", powerOfTwo(4096));
    return 0;
}
