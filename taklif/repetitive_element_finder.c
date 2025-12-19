#include <stdio.h>

int main() {
    int arraySize, dupCheck = 0;
    printf("give me the size of your array : \n");
    scanf(" %d", &arraySize);
    int myArray[arraySize];
    for (int i = 0; i < arraySize; i++) {
        printf("%d element is : \n", i + 1);
        scanf(" %d", &myArray[i]);
    }
    for (int i = 0; i < arraySize; i++) {
        for (int j = i + 1; j < arraySize; j++) {
            if (myArray[i] == myArray[j]) {
                printf("%d ", myArray[i]);
                dupCheck++;
                break;
            }
        }
    }
    if (dupCheck == 0) { printf("no duplicates"); }
    return 0;
}
