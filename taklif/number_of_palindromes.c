#include <stdio.h>

int str_length(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        i++;
    }
    return i;
}

int palCheck(char string[]) {
    int len = str_length(string);
    for (int i = 0; i < len / 2; i++) {
        if (string[i] != string[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char string[100];
    printf("your string is :\n");
    fgets(string, 100,stdin);
    char temp[50];
    int maxPal = 0;
    int i = 0;
    int j = 0;
    int length = str_length(string);
    string[length - 1] = '\0';
    while (string[i] != '\0') {
        j = 0;
        while (string[i] != '\0' && string[i] != ' ') {
            temp[j] = string[i];
            i++;
            j++;
        }
        temp[j] = '\0';
        int tempLen = str_length(temp);
        if ( palCheck(temp) == 1) {
            if (tempLen > 0 && tempLen > maxPal) {
                maxPal = tempLen;
            }
        }
        while (string[i]==' ') {
            i++;
        }
    }
    printf("%d\n", maxPal);
    i = 0;
    while (string[i] != '\0') {
        j = 0;
        while (string[i] != '\0' && string[i] != ' ') {
            temp[j] = string[i];
            i++;
            j++;
        }
        temp[j] = '\0';
        if ( palCheck(temp) == 1) {
            printf("%s\n",temp);
        }
        while (string[i]==' ') {
            i++;
        }
    }

    return 0;
}
