#include <stdio.h>

int main() {
    int input;
    scanf("%d",&input);
    int sqrCount = 0;
    while (input>0) {
        sqrCount += input*input;
        input--;
    }
    printf("%d",sqrCount);
    return 0;
}
