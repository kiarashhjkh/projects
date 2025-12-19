#include <stdio.h>

int main() {
    int row, column, zeroCounter = 0;
    printf("row size :");
    scanf(" %d", &row);
    printf("column size :");
    scanf(" %d", &column);
    int matrix[row][column];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("[%d][%d] :", i, j);
            scanf(" %d", &matrix[i][j]);
            if (matrix[i][j] != 0) {
                zeroCounter++;
            }
        }
    }
    printf("%d %d %d\n", row, column, zeroCounter);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (matrix[i][j] != 0) {
                printf("%d %d %d\n", i, j, matrix[i][j]);
            }
        }
    }
    return 0;
}
