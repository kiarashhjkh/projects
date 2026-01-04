#include <stdio.h>

int str_len(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        i++;
    }
    return i;
}


void wordReverse(char *word) {
    int len = str_len(word);
    char temp = ' ';
    for (int i = 0; i < len / 2; i++) {
        temp = word[i];
        word[i] = word[len - i - 1];
        word[len - i - 1] = temp;
    }
}

int main() {
    char string[100];
    int i = 0, j = 0;
    char temp[50];
    fgets(string, 100,stdin);
    string[str_len(string) - 1] = '\0';
    while (string[i] != '\0') {
        j = 0;
        while (string[i] != ' ' && string[i] != '\0') {
            temp[j] = string[i];
            i++;
            j++;
        }
        temp[j] = '\0';
        wordReverse(temp);
        printf("%s ", temp);
        while (string[i] == ' ') {
            i++;
        }
    }
    return 0;
}
