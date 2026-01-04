#include <stdio.h>

int str_len(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        i++;
    }
    return i;
}

char *str_cat(char *str1, char *str2) {
    int str1Len = str_len(str1);
    int str2Len = str_len(str2);
    for (int i = 0; i < str2Len; i++) {
        str1[i + str1Len] = str2[i];
    }
    str1[str2Len + str1Len] = '\0';
    return str1;
}

int main() {
    char str1[50] = "Hello ";
    char str2[50] = "World";
    printf("%s", str_cat(str1, str2));
}
