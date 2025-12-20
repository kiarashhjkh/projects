#include <stdio.h>

int main() {
    int arraySize, dupCheck = 0;
    printf("give me the size of your array : \n");
    scanf(" %d", &arraySize);
    int myArray[arraySize];
    for (int i = 0; i < arraySize; i++) {
        printf("element %d is : \n", i + 1);
        scanf(" %d", &myArray[i]);
    }
    for (int i = 0; i < arraySize; i++) {
        int alreadyPrinted = 0;
        for (int k = 0; k < i; k++) {
            if (myArray[i] == myArray[k]) {
                alreadyPrinted = 1;
                break;
            }
        }
        if (alreadyPrinted == 1) {
            continue;
        }
        for (int j = i + 1; j < arraySize; j++) {
            if (myArray[i] == myArray[j]) {
                printf("%d ", myArray[j]);
                dupCheck++;
                break;
            }
        }
    }
    if (dupCheck == 0) { printf("no duplicates"); }
    return 0;
}
