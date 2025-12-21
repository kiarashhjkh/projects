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
    int nonZeroHolder[nonZeroCounter][3];
    int temp = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (matrix[i][j] != 0) {
                nonZeroHolder[temp][0] = i;
                nonZeroHolder[temp][1] = j;
                nonZeroHolder[temp][2] = matrix[i][j];
                temp++;
            }
        }
    }
    printf("%d %d %d\n", row, column, nonZeroCounter);
    for (int i = 0; i < nonZeroCounter; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", nonZeroHolder[i][j]);
        }
        printf("\n");
    }
    return 0;
}
