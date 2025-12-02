#include <stdio.h>

void add(int a, int b) { printf("Results : %d\n", a + b); }
void sub(int a, int b) { printf("Results : %d\n", a - b); }
void multiply(int a, int b) { printf("Results : %d\n", a * b); }

int main() {
    int choice;
    int x = 3, y = 4;
    void (*ops[3])(int, int) = {add, sub, multiply};

    printf("your x is %d and your y is %d\n", x, y);
    printf("choose an operation : \n");
    printf("0 for add : \n 1 for sub : \n 2 for multply : \n");
    scanf("%d", &choice);

    if (choice >= 0 && choice < 3) {
        ops[choice](x, y);
    } else {
        printf("Go Fuck Yourself");
        return 1;
    }


    return 0;
}
