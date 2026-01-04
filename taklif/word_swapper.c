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
        return 0;
    }
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            return 0;
        }
    }
    return 1;
}

//baraye strcmp jaye return haro avaz kardam
void str_cpy(char des[], char source[]) {
    int i = 0;
    while (source[i] != '\0') {
        des[i] = source[i];
        i++;
    }
    des[i] = '\0';
}

int main() {
    char string[100], word1[50], word2[50];
    char result[100] = "";
    char temp[50];
    int found1 = 0, found2 = 0;
    int i = 0, j = 0;
    fgets(string, 100,stdin);
    string[str_len(string) - 1] = '\0';
    printf(":");
    scanf(" %s", &word1);
    printf(":");
    scanf(" %s", &word2);
    while (string[i] != '\0') {
        j = 0;
        while (string[i] != ' ' && string[i] != '\0') {
            temp[j] = string[i];
            j++;
            i++;
        }
        temp[j] = '\0';
        if (str_cmp(temp, word1) == 1) { found1 = 1; }
        if (str_cmp(temp, word2) == 1) { found2 = 1; }
        while (string[i] == ' ') {
            i++;
        }
    }
    i = 0;
    if (found1 == 0 && found2 == 0) {
        printf("%s", string);
    } else {
        int k = 0;
        while (string[i] != '\0') {
            j = 0;
            while (string[i] != ' ' && string[i] != '\0') {
                temp[j] = string[i];
                j++;
                i++;
            }
            temp[j] = '\0';
            if (str_cmp(temp, word1) == 1) {
                str_cpy(&result[k], word2);
                k += str_len(word2);
                result[k++] = ' ';
            } else if (str_cmp(temp, word2) == 1) {
                str_cpy(&result[k], word1);
                k += str_len(word1);
                result[k++] = ' ';
            } else {
                str_cpy(&result[k], temp);
                k += str_len(temp);
                result[k++] = ' ';
            }
            while (string[i] == ' ') {
                i++;
            }
        }
        result[k] = '\0';
    }
    printf("%s", result);
    return 0;
}
