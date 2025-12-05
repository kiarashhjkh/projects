#include <stdio.h>

int main() {
    int n;
    int choice = 1, temp = 2;
    printf("how many even numbers do you want starting from 2 ?");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("%d\n", temp);
        temp += 2;
        if (i == n - 1) {
            break;
        }
        printf("do you wanna continue ? (no : 0 , yes : 1)");
        scanf("%d", &choice);
        if (choice == 0) {
            printf("program stopped by the user");
            break;
        }
    }
    return 0;
}
