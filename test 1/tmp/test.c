#include <stdio.h>
#include <stdbool.h>

int main() {
    int age_of_lic;
    int sol_input;
    bool sol;
    printf("how old are you ? \n");
    scanf("%d", &age_of_lic);
    if (age_of_lic > 90) {
        printf("you are to old for this shit !");

        return 1;
    }
    printf("are you a solider (0/1) ?\n");
    scanf("%d", &sol_input);

    (sol_input == 1) ? true : false;
    if (sol_input > 1 || sol_input < 0) {
        printf("you can only put a 0 or 1 for this question");

        return 1;
    }
    sol = sol_input;

    if (age_of_lic >= 18) {
        printf("you are old enough\n");


        if (sol == true) {
            printf("and you are a soldier therefore you can not get a license\n");
        } else {
            printf("but you are not a soldier so you can get a license\n");
        }
    } else {
        printf("you are not old enough and you can not get a driver license\n");
    }
    return 0;
}
