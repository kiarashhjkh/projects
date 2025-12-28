#include <stdio.h>

int str_length(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        i++;
    }
    return i;
}

void palCheck(char *String) {
    int valid = 1;
    int length = str_length(String);
    for (int i = 0; i < length / 2; i++) {
        if (String[i] != String[length - i - 1]) {
            valid = 0;
        }
    }
    if (valid == 1) {
        printf("this string is palindrome");
    } else printf("this string is not plaindrome");
}

int main() {
    palCheck("owlwo");
    return 0;
}
