#include <stdio.h>

int main() {
    int arraySize;
    int temp =0;
    printf("give me the size of your array : \n");
    scanf(" %d",&arraySize);
    int myArray[arraySize];
    for (int i = 0;i<arraySize;i++) {
        printf("element %d is : \n",i+1);
        scanf(" %d",&myArray[i]);
    }
    for (int i =0;i<arraySize;i++) {
        for (int j = 0;j<arraySize;j++) {
            if (myArray[j]<myArray[j+1]) {
                temp = myArray[j+1];
                myArray[j+1]=myArray[j];
                myArray[j]=temp;
            }
        }
    }
    for (int i = 0;i<arraySize;i++) {
        printf("%d\n",myArray[i]);
    }
    return 0;
}
