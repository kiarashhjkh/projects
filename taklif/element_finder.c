#include <stdio.h>

int main() {
    int arraySize;
    int target;
    printf("give me the size of your array : \n");
    scanf(" %d", &arraySize);
    int myArray[arraySize];
    for (int i = 0; i < arraySize; i++) {
        printf("%d element is : \n", i + 1);
        scanf(" %d", &myArray[i]);
    }
    printf("what number do you wanna find : \n");
    scanf(" %d", &target);
    for (int i = 0; i < arraySize; i++) {
        if (myArray[i] == target) {
            printf("index number of %d", i);
            break;
        }
            if (i == arraySize-1 ) { printf("-1");}
    }
    return 0;
}
