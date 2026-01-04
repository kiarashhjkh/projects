#include <stdio.h>

int str_len(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        i++;
    }
    return i;
}


int main() {
    int rows;
    char str[50];
    printf("your string :\n");
    scanf("%s", str);
    printf("the number of rows :\n");
    scanf("%d", &rows);
    if (rows==1) {
        printf("%s",str);
        return 1;
    }
    int length = str_len(str);
    char matrix[rows][length];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < length; j++) {
            matrix[i][j]=' ';
        }
    }
    int i = 0, j = 0;
    int direction = -1;
    int rowPos = rows - 1;
    while (str[i] != '\0') {
        matrix[rowPos][i] = str[i];
        if (rowPos == rows - 1) {
            direction = -1;
        }
        if (rowPos == 0) {
            direction = 1;
        }
        rowPos += direction;
        i++;
    }
    for (i = 0; i < rows; i++) {
        for (j = 0; j < length; j++) {
            if (matrix[i][j]!=' ') {
                printf("%c",matrix[i][j]);
            }
        }
    }
    return 0;
}
