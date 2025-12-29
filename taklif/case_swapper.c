#include <stdio.h>

int str_length(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

char *caseSwapper(char *str) {
    for (int i = 0; i < str_length(str); i++) {
        if (97 <= str[i] && str[i] <= 122) {
            str[i] -= 32;
        }else if (65 <= str[i] && str[i] <= 90) {
            str[i] += 32;
        }
    }
    return str;
}

int main() {
    char str []= "It's a wonderful life !";
    printf("%s\n",str);
    printf("%s\n",caseSwapper(str));

    return 0;
}
