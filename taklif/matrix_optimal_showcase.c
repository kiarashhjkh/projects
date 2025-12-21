#include <stdio.h>

int main() {
    int row, column, zeroCounter = 0;
    printf("number of rows :");
    scanf(" %d", &row);
    printf("number of columns :");
    scanf(" %d", &column);
    int matrix[row][column];
    int rowHolder[row * column], columnHolder[row * column], nonZeroHolder[row * column];
    printf("enter the elements of the matrix : \n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("[%d][%d] :", i, j);
            scanf(" %d", &matrix[i][j]);
            if (matrix[i][j] != 0) {
                rowHolder[zeroCounter] = i;
                columnHolder[zeroCounter] = j;
                nonZeroHolder[zeroCounter] = matrix[i][j];
                zeroCounter++;
            }
        }
    }
    printf("%d %d %d\n", row, column, zeroCounter);
    for (int i = 0 ; i < zeroCounter;i++) {
        printf("%d %d %d \n",rowHolder[i],columnHolder[i],nonZeroHolder[i]);
    }
    return 0;
}
