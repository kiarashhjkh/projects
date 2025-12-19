#include <stdio.h>

int main() {
    float x, y;
    int choice;
    printf("give me two numbers : \n");
    scanf("%f %f", &x, &y);
    printf("1.add\n2.subtraction\n3.multiplication\n4.division\n5.power\n6.factorial\n7.exit\n");
    scanf("%d", &choice);

    while (choice != 7) {
        while (choice <= 0 || 8 <= choice) {
            printf("invalid input \n");
            scanf("%d", &choice);
        }
        switch (choice) {
            case 1:
                printf("%.2f\n", x + y);
                break;
            case 2:
                printf("%.2f\n", x - y);
                break;
            case 3:
                printf("%.2f\n", x * y);
                break;
            case 4:
                if (y != 0) {
                    printf("%.2f\n", x / y);
                }
                printf("error : division by zero \n");
                printf("1.add\n2.subtraction\n3.multiplication\n4.division\n5.power\n6.factorial\n7.exit\n");
                break;
            case 5:
                float temp =1;
                int temp2=y;
                if (temp2<0) {
                    temp2=-temp2;
                    x = 1/x;
                }else {
                    while (temp2>0) {
                        temp*=x;
                        temp2--;
                    }
                }
                printf("%.2f",temp);
                break;
            case 6:
                if (x < 0) {
                    printf("error : negative number \n");
                    printf("1.add\n2.subtraction\n3.multiplication\n4.division\n5.power\n6.factorial\n7.exit\n");
                } else if (x == 0) {
                    printf("1\n");
                } else {
                    int z = x;
                    int fac = 1;
                    while (z > 0) {
                        fac *= z;
                        z--;
                    }
                    printf("%d\n", fac);
                }
                break;
        }
        scanf("%d", &choice);
    }
    return 0;
}
