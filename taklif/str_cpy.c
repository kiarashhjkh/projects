#include <stdio.h>


char *str_cpy(char des[],char source[]) {
    int i=0;
    while (source[i] != '\0') {
        des[i]=source[i];
        i++;
    }
    des[i] ='\0';
    return des;
}

int main() {
    char str1[50]="j";
    char str2[] ="hjklhjklhjlh hgk";
    printf("%s",str_cpy(str1,str2));
}
