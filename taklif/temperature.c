#include <stdio.h>

int main() {
    float temp;
    char start ;
    char finish ;
    printf("give me the value of temperature and the starting unit in upper case and the ending unit also in upper case (C , K ,F) :");
    scanf("%f %c %c", &temp, &start, &finish);
    if (start == 'C') {
        if (finish == 'F') {
            printf("%.2f", (1.8) * temp + 32);
        } else if (finish == 'K') {
            printf("%.2f", temp + 273.15);
        } else {
            printf("invalid input");
        }
    } else if (start == 'K') {
        if (finish == 'C') {
            printf("%.2f", temp - 273.15);
        } else if (finish == 'F') {
            printf("%.2f", (1.8) * (temp - 273.15) + 32);
        } else {
            printf("invalid input");
        }
    } else if (start == 'F') {
        if (finish == 'C') {
            printf("%.2f", ((temp - 32) * 5) / 9);
        } else if (finish == 'K') {
            printf("%.2f", (((temp - 32) * 5) / 9) + 273.15);
        } else {
            printf("invalid input");
        }
    } else {
        printf("invalid input");
    }
    return 0;
}
