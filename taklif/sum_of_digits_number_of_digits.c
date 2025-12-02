#include <stdio.h>

int main () {
    int n;
    int i = 0,sumDigi = 0;
    printf("give me a number : ");
    scanf("%d",&n);
    while (n>0) {
        sumDigi += n%10;
        n = n/10;
        i++;
    }

    printf("your number has %d digits and the sum of your digits are %d",i,sumDigi);

    return 0;
}