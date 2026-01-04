#include <stdio.h>

int str_len(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        i++;
    }
    return i;
}

char *str_str(char *haystack, char *needle) {
    if (*haystack == '\0') {
        return haystack;
    }
    while (*haystack != '\0') {
        char *hayGo = haystack;
        char *needGo = needle;
        while (*needGo != '\0' && *hayGo == *needGo) {
            hayGo++;
            needGo++;
        }
        if (*needGo == '\0') {
            return haystack;
        }
        haystack++;
    }
    return NULL;
}

void str_cpy(char des[], char source[]) {
    int i = 0;
    while (source[i] != '\0') {
        des[i] = source[i];
        i++;
    }
    des[i] = '\0';
}

int main() {
    char str[200], sub1[50], sub2[50];
    int number;
    char result[200];
    int i = 0;
    int j = 0;
    fgets(str, 100,stdin);
    printf(":");
    scanf("%s", sub1);
    printf(":");
    scanf("%s", sub2);
    printf(":");
    scanf("%d", &number);
    while (i < str_len(str)) {
        if (0 < number) {
            if (str_str(&str[i], sub1) == &str[i]) {
                str_cpy(&result[j], sub2);
                j += str_len(sub2);
                i += str_len(sub1);
                number--;
            } else {
                result[j] = str[i];
                j++;
                i++;
            }
        } else {
            result[j] = str[i];
            j++;
            i++;
        }
    }
    result[j] = '\0';
    printf("%s", result);

    return 0;
}
