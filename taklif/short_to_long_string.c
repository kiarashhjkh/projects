#include <stdio.h>

int main() {
    char input[100];
    printf("your input : \n");
    scanf(" %s", &input);
    int index = 0;
    while (input[index] != '\0') {
        int sum = 0;
        while (input[index] >= '0' && input[index] <= '9') {
            sum = sum * 10 + (input[index] - '0');
            index++;
        }
        if (input[index] != '\0') {
            for (int i = 0; i < sum; i++) {
                printf("%c", input[index]);
            }
            index++;
        }
    }
    return 0;
}
