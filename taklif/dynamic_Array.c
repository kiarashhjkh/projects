#include <stdio.h>
#include <stdlib.h>

typedef struct dynamicArray {
    int numData;
    int size;
    int *dataHolder;
} da_t;

void dynamicAllocation(da_t *da) {
    da->numData = 0;
    da->size = 2;
    da->dataHolder = malloc(sizeof(int) * da->size);
    if (da->dataHolder == NULL) {
        printf("memory allocation failed !");
        exit(0);
    }
}

void dynamicArrayElementAdder(da_t *da, int dataValue) {
    da->dataHolder[da->numData] = dataValue;
    da->numData++;
    if (da->numData == da->size) {
        da->size *= 2;
        da->dataHolder = realloc(da->dataHolder, sizeof(int) * da->size);
        if (da->dataHolder == NULL) {
            printf("memory reallocation failed !");
            exit(0);
        }
    }
}

void dynamicArrayElementReturner(da_t *da, int index) {
    printf("%d\n", da->dataHolder[index]);
}

void dynamicArrayDeallocation(da_t *da) {
    da->dataHolder = NULL;
    da->size = 0;
    da->numData = 0;
}

int main() {
    da_t myDynamicArray;
    dynamicAllocation(&myDynamicArray);
    dynamicArrayElementAdder(&myDynamicArray, 1);
    dynamicArrayElementAdder(&myDynamicArray, 2);
    dynamicArrayElementAdder(&myDynamicArray, 3);
    dynamicArrayElementAdder(&myDynamicArray, 4);
    for (int i = 0; i < myDynamicArray.numData; i++) {
        dynamicArrayElementReturner(&myDynamicArray, i);
    }
    printf("size of your dynamic array : %d\n", myDynamicArray.size);
    printf("the number of data in your dynamic array is : %d\n", myDynamicArray.numData);
    dynamicArrayDeallocation(&myDynamicArray);
    return 0;
}
