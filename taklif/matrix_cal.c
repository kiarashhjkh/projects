#include <ctype.h>
#include <stdio.h>

int main() {
    int choice;
    int matrix1row = 0, matrix1column = 0, matrix2row = 0, matrix2column = 0;
    int matrix1[10][10], matrix2[10][10];
    printf("1.input the matrices \n2.display matrices \n3.add matrices \n4.subtract matrices \n5.exit \nchoice:");
    scanf(" %d", &choice);
    while (choice != 5) {
        while (choice < 1 || choice > 5) {
            printf("invalid choice !");
            scanf(" %d", &choice);
        }
        switch (choice) {
            case 1:
                printf("give me the row and column size of your first matrix :");
                scanf(" %d %d", &matrix1row, &matrix1column);
                printf("give me the row and column size of your second matrix :");
                scanf(" %d %d", &matrix2row, &matrix2column);
                for (int i = 0; i < matrix1row; i++) {
                    for (int j = 0; j < matrix1column; j++) {
                        printf("row %d column %d of your first matrix is :", i + 1, j + 1);
                        scanf(" %d", &matrix1[i][j]);
                    }
                }
                for (int i = 0; i < matrix2row; i++) {
                    for (int j = 0; j < matrix2column; j++) {
                        printf("row %d column %d of your second matrix is :", i + 1, j + 1);
                        scanf(" %d", &matrix2[i][j]);
                    }
                }
                break;

            case 2:
                printf("\nthe elements of your first matrix is :\n");
                for (int i = 0; i < matrix1row; i++) {
                    for (int j = 0; j < matrix1column; j++) {
                        printf("%d  ", matrix1[i][j]);
                        if (j == matrix1column - 1) {
                            printf("\n");
                        }
                    }
                }
                printf("the elements of your second matrix is :\n");
                for (int i = 0; i < matrix2row; i++) {
                    for (int j = 0; j < matrix2column; j++) {
                        printf("%d  ", matrix2[i][j]);
                        if (j == matrix2column - 1) {
                            printf("\n");
                        }
                    }
                }
                break;
            case 3:
                if (matrix1row == matrix2row && matrix1column == matrix2column) {
                    for (int i = 0; i < matrix1row; i++) {
                        for (int j = 0; j < matrix1column; j++) {
                            printf("%d ", matrix1[i][j] + matrix2[i][j]);
                            if (j == matrix1column - 1) {
                                printf("\n");
                            }
                        }
                    }
                } else { printf("can't add these to matrices together because their size don't match"); }
                break;
            case 4:
                if (matrix1row == matrix2row && matrix1column == matrix2column) {
                for (int i = 0; i < matrix1row; i++) {
                    for (int j = 0; j < matrix1column; j++) {
                        printf("%d ", matrix1[i][j] - matrix2[i][j]);
                        if (j == matrix1column - 1) {
                            printf("\n");
                        }
                    }
                }
            } else { printf("can't subtract these matrices from another because their size don't match"); }
                break;
        }
        printf("1.input the matrices \n2.display matrices \n3.add matrices \n4.subtract matrices \n5.exit \nchoice:");
        scanf("%d", &choice);
    }


    return 0;
}
