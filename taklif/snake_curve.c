#include <stdio.h>


void snakeMovement(char *movement) {
    int matrix[2][8] = {{0}, {0}};
    matrix[1][0] = 1;
    int i = 1, j = 0;
    int index = 0;
    while (movement[index] != '\0') {
        if (movement[index] == 'F') {
            j++;
        }else if (movement[index] == 'L') {
            j++;
            i--;
        }else if (movement[index] == 'R') {
            j++;
            i++;
        }
        if (0 <= i && i <= 1 && j <= 7 ) {
            matrix[i][j] = 1;
        }else {
            break;
        }
        index++;
    }
    if (i <= -1 || i >= 2 || 7 < j) {
        printf("The snake is dead");
    } else {
        for (int x = 0; x < 2; x++) {
            for (int y = 0; y < 8; y++) {
                printf("%d", matrix[x][y]);
            }
            { printf("\n"); }
        }
    }
}

int main() {
    snakeMovement("FLFFRLF");
    return 0;
}
