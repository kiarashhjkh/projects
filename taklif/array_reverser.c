#include <stdio.h>

void reverseArray(int Array[],int length) {
    int temp = 0;
    printf("Before reverse :");
    for (int i = 0;i < length ;i++) {
        printf("%d ",Array[i]);
        if (i == length - 1) {
            printf("\n");
        }
    }
    for (int i = 0; i < length / 2 ; i++) {
        temp = Array[i];
        Array[i]=Array[length-i-1];
        Array[length-i-1]= temp;
    }
    printf("After reverse :");
    for (int i = 0; i<length ;i++) {
        printf("%d ",Array[i]);
        if (i == length - 1) {
            printf("\n");
        }
    }
}

int main() {
    int length;
    printf("length of your array :");
    scanf(" %d",&length);
    int myArray[length];
    for (int i = 0;i < length;i++ ) {
        printf("[%d]:",i);
        scanf(" %d",&myArray[i]);
    }
    reverseArray(myArray,length);
    return 0;
}
