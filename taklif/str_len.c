#include <stdio.h>

int str_len(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        i++;
    }
    return i;
}

int main () {
    char *str= "Kiarash is stupid ";
    int length = str_len(str);
    printf("%d",length);
    return 0;
}