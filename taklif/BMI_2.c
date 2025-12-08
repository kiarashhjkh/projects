#include <stdio.h>

int main() {
    float wei, hei;
    int choice;
    printf("give me your weight and height : \n");
    scanf("%f %f", &wei, &hei);

    float BMI = wei / (hei * hei);
    printf("1.BMI\n2.show status\n3.new information\n4.exit\n");
    scanf("%d", &choice);

    while (choice != 4) {
        while (choice <= 0 || choice >= 5) {
            printf("invalid choice\n");
            scanf("%d", &choice);
        }
        switch (choice) {
            case 1:
                printf("%.2f\n", BMI);
                break;
            case 2:
                if (BMI < 18.50) {
                    printf("skinny\n");
                } else if (18.5 <= BMI && BMI <= 25.00) {
                    printf("nomral\n");
                } else if (25.00 <= BMI && BMI < 30.00) {
                    printf("overweight\n");
                } else if (30.00 <= BMI) {
                    printf("obese\n"); //fat zeshte
                }
                break;
            case 3:
                printf("give me the new information : \n");
                scanf("%f %f", &wei, &hei);
                BMI = wei / (hei * hei);
                break;
        }
        scanf("%d", &choice);
    }
    return 0;
}
