#include <stdio.h>

int main() {
    unsigned long long int number;
    unsigned long long int reverse_number = 0;

    printf("give me a number for me to reverse it : ");
    scanf("%llu", &number);
    while (number) {
        reverse_number = reverse_number * 10 + number % 10;
        number /= 10;
    }
    printf("your number reveresed form is : %llu", reverse_number);

    return 0;
}
