#include <stdio.h>

char *str_str(char *haystack, char *needle) {

    if (*needle == '\0') {
        return haystack;
    }
    while (haystack != '\0') {
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

int subCount(char *string, char *subString) {
    int length = str_len(string);
    int subLength = str_len(subString);
    int counter = 0;
    for (int i = 0; i < length; i++) {
        int found = 1;
        for (int j = 0; j < subLength; j++) {
            if (subString[j] != string[i + j]) {
                found = 0;
                break;
            }
        }
        if (found == 1) {
            counter++;
        }
    }
    return counter;
}

void charRemover(char *string, char target) {
    int pos = 0;
    while (string[pos] != '\0') {
        if (string[pos] == target) {
            int newPos = pos;
            while (string[newPos] != '\0') {
                string[newPos] = string[newPos + 1];
                newPos++;
            }
        } else {
            pos++;
        }
    }
}

void charReplacer(char *string,char target,char replace) {
    int index = 0;
    while (string[index] != '\0') {
        if (string[index] == target) {
            string[index] = replace;
        }
        index++;
    }
} 


int main() {
    char str[] = "hello this is kiarash";
    charReplacer(str,'k','m');
    printf("%s",str);
    return 0;
}
