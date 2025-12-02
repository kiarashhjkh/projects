#include <stdio.h>

int main() {
    float year, month, week, day, hour, min, sec;
    printf("give me seconds : ");
    scanf("%f", &sec);
    min = sec / 60;
    hour = min / 60;
    day = hour / 24;
    week = day / 7;
    month = week / 4;
    year = month / 12;
    printf("approximately %.2f Min\n", min);
    printf("approximately %.2f H\n", hour);
    printf("approximately %.2f D\n", day);
    printf("approximately %.2f W\n", week);
    printf("approximately %.2f Mon\n", month);
    printf("approximately %.2f Y\n", year);
    return 0;
}
