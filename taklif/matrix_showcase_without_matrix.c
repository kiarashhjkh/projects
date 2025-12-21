#include <stdio.h>

int main() {
    int input, row, col;
    printf("number of rows :");
    scanf(" %d", &row);
    printf("number of columns :");
    scanf(" %d", &col);
    int  rowIndex[row*col], colIndex[row*col], nonZero[row*col];
    int tempIndex = 0, zeroCounter = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("[%d][%d]", i, j);
            scanf(" %d", &input);
            if (input != 0) {
                nonZero[tempIndex] = input;
                rowIndex[tempIndex] = i;
                colIndex[tempIndex] = j;
                tempIndex++;
                zeroCounter++;
            }
        }
    }
    printf("%d %d %d \n", row, col, zeroCounter);
    for (int i = 0; i < zeroCounter; i++) {
        printf("%d %d %d \n", rowIndex[i], colIndex[i], nonZero[i]);
    }
    return 0;
}
