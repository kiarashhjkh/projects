#include <stdio.h>

int main() {
    int courseNumber;
    float sum = 0;
    printf("how many courses :");
    scanf("%d", &courseNumber);
    int courseGrades[courseNumber];
    for (int i = 0; i < courseNumber; i++) {
        printf("course %d :", i + 1);
        scanf(" %d", &courseGrades[i]);
    }
    int max = courseGrades[0], min = courseGrades[0];
    for (int i = 1; i < courseNumber; i++) {
        if (max <= courseGrades[i]) {
            max = courseGrades[i];
        }
    }
    for (int i = 1; i < courseNumber; i++) {
        if (min >= courseGrades[i]) {
            min = courseGrades[i];
        }
    }
    for (int i = 0; i < courseNumber; i++) {
        sum += courseGrades[i];
    }
    for (int i = 0; i < courseNumber; i++) {
        float temp = courseGrades[i];
        printf("Course %d | Grade: %d | ", i + 1, courseGrades[i]);
        while (temp >= 5) {
            printf("*");
            temp -= 5;
        }
        while (temp >= 2.5) {
            printf("-");
            temp -= 2.5;
        }
        while (temp > 0) {
            printf("+");
            temp -= 0.5;
        }
        printf("\n");
    }
    printf("Average Grade : %.2f\n", (sum / courseNumber));
    printf("Highest Grade : %d\n", max);
    printf("Lowest Grade : %d\n", min);
    return 0;
}
