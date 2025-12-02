#include <stdio.h>

int main() {
    int age[] = {10, 23, 32, 43, 20, 30};
    float length = sizeof(age) / sizeof(int);
    float sum = 0;
    int i;
    for (i = 0; i < length; i++) {
        sum = sum + age[i];
    }
    printf("%.2f", sum / length);
    return 0;
}
