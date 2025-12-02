#include <stdio.h>
#include <string.h>

int main() {
    char myString[50];
    char myString1[50];
    fgets(myString, sizeof(myString),stdin);
    fgets(myString1, sizeof(myString1),stdin);
    int j = 0;
    if (strlen(myString) != strlen(myString1)) {
        printf("your strings are not the same");
    } else {
        for (int i = 0; i <= strlen(myString); i++) {
            if (myString[i] != myString1[j]) {
                printf("your strings are not the same");
                break;
            }
            if (i == strlen(myString) && j == strlen(myString)) {
                if (myString[i] == myString1[j]) {
                    printf("your strings are the same");
                }
            }

            j++;
        }
    }

    return 0;
}
