#include <stdio.h>
void find(int myArray[],int target) {
    int arraySize = sizeof(myArray)/4;
    for (int i = 0; i < arraySize; i++) {
        if (myArray[i] == target) {
            printf("index number of %d", i);
            break;
        }
        if (i == arraySize-1 ) { printf("-1");}
    }
}

int main() {
    int arraySize;
    int target;
    printf("give me the size of your array : \n");
    scanf(" %d", &arraySize);
    int myArray[arraySize];
    for (int i = 0; i < arraySize; i++) {
        printf("element %d  is : \n", i + 1);
        scanf(" %d", &myArray[i]);
    }
    printf("what number do you wanna find : \n");
    scanf(" %d", &target);
    find(myArray,target);

    return 0;
}
