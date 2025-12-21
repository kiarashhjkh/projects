#include <stdio.h>

int main() {
    int row, column, nonZeroCounter = 0;
    printf("number of rows :");
    scanf(" %d", &row);
    printf("number of columns :");
    scanf(" %d", &column);
    int matrix[row][column];
    printf("enter the elements of the matrix : \n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("[%d][%d] :", i, j);
            scanf(" %d", &matrix[i][j]);
            if (matrix[i][j] != 0) {
                nonZeroCounter++;
            }
        }
    }
    int nonZeroHolder[nonZeroCounter];
    int temp = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (matrix[i][j] != 0) {
                nonZeroHolder[temp]=matrix[i][j];
                temp++;
            }
        }
    }
    temp = 0;
    printf("%d %d %d \n",row,column,nonZeroCounter);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (matrix[i][j] != 0) {
                printf("%d %d %d\n",i,j,nonZeroHolder[temp]);
                temp++;
            }
        }
    }
    return 0;
}
