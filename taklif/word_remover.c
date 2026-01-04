#include <stdio.h>

char *str_str(char *haystack, char *needle) {
    if (*needle == '\0') {
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

int str_len(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        i++;
    }
    return i;
}

void subRemover(char string[], char word[]) {
    int i = 0;
    int strLength = str_len(string);
    int wordLen = str_len(word);
    while (i < strLength) {
        if (str_str(&string[i], word) == &string[i]) {
            strLength -= wordLen;
            for (int j = i; j < strLength; j++) {
                string[j] = string[j + wordLen];
            }
        } else { i++; }
    }
    string[i] = '\0';
}

int main() {
    char str[100];
    char word[100];
    printf("text :\n");
    fgets(str, 100,stdin);
    printf("target :\n");
    scanf("%s",word);
    subRemover(str, word);
    printf("%s", str);
    return 0;
}
