#include <stdio.h>

int main() {
    int arraySize;
    printf("give me the size of your array : \n");
    scanf(" %d", &arraySize);
    int myArray[arraySize];
    for (int i = 0; i < arraySize; i++) {
        printf("element %d is : \n", i + 1);
        scanf(" %d", &myArray[i]);
    }
    for (int i = 0; i < arraySize; i++) {
        printf("%d  ", myArray[i]);
        if (i == arraySize - 1) {
            printf("\n");
        }
    }
    for (int i = arraySize - 1;i >= 0;i--) {
        printf("%d  ",myArray[i]);
    }
        return 0;
}
