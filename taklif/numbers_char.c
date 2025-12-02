#include <stdio.h>
#include <string.h>

int charnumber(char chr , char myString[]) {
    int num = 0;
    for (int i = 0  ; i <= strlen(myString) ; i++) {
        if (myString[i] == chr) {
            num++;
        }
        else {continue;}
    }
    return num;
}


int main () {
    printf("%d",charnumber(' ',"ccccc a"));
    return 0;
}