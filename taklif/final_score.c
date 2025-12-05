#include <stdio.h>

int main() {
    float mid, fin, ext;
    int choice;
    printf("give me your scores for midterm and final and extras : \n");
    scanf("%f %f %f", &mid, &fin, &ext);
    while (mid > 20 || fin > 20 || ext > 20 || mid < 0 || fin < 0 || ext < 0) {
        printf("invalid input");
        scanf("%f %f %f", &mid, &fin, &ext);
    }

    float avg = (mid + fin + ext) / 3;
    printf("1.final grade\n2.show pass\\fail\n3.new information\n4.exit\n");
    scanf("%d", &choice);

    while (choice != 4) {
        while (choice <= 0 || choice >= 5) {
            printf("invalid choice\n");
            scanf("%d", &choice);
        }
        if (choice == 1) {
            printf("%.2f\n", avg);
        } else if (choice == 2) {
            if (avg < 10) {
                printf("you failed\n");
            } else if (avg >= 10) {
                printf("you passed\n");
            }
        } else if (choice == 3) {
            printf("give me the new information : \n");
            scanf("%f %f %f", &mid, &fin, &ext);
            avg = (mid + fin + ext) / 3;
        }
        scanf("%d", &choice);
    }


    return 0;
}
