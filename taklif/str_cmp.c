#include <stdio.h>

int str_len(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        i++;
    }
    return i;
}

int str_cmp(char *str1, char *str2) {
    if (str_len(str1) != str_len(str2)) {
        return 1;
    }

    for (int i = 0; i < str_len(str1); i++) {
        if (str1[i] != str2[i]) {
            return 1;
        }
    }

    return 0;
}

int main() {
    printf("%d",str_cmp("one","one"));
    return 0;
}
