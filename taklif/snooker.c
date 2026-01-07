#include <stdio.h>

int str_len(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        i++;
    }
    return i;
}


int getPoint(char *string) {
    switch (string[0]) {
        case 'w':
            return 0;
        case 'r':
            return 1;
        case 'y':
            return 2;
        case 'g':
            return 3;
        case 'b':
            if (string[str_len(string) - 1] == 'n') {
                return 4;
            }
            if (string[str_len(string) - 1] == 'e') {
                return 5;
            }
            if (string[str_len(string) - 1] == 'k') {
                return 7;
            }
        case 'p':
            return 6;
        case 'm':
            return 0;
        default:
            return -1;
    }
}


int main() {
    int totalTurns;
    char input[50];
    int turn = 1;
    int score1 = 0, score2 = 0;
    int reds = 15;
    int redCheck = 0;
    int invalid = 0;
    int finalColor[8] = {0};
    printf("turns : \n");
    scanf("%d", &totalTurns);
    while (totalTurns--) {
        scanf(" %s", input);
        int point = getPoint(input);
        if (point == -1) {
            invalid = 1;
            break;
        }
        if (point == 0) {
            redCheck = 0;
            if (turn == 1) {
                turn = 2;
            } else { turn = 1; }
            continue;
        }
        if (reds > 0) {
            if (point == 1) {
                reds--;
                redCheck = 1;

                if (turn == 1) { score1++; } else {
                    score2++;
                }
            } else {
                if (redCheck == 1) {
                    redCheck = 0;
                    if (turn == 1) {
                        score1 += point;
                    } else { score2 += point; }
                } else {
                    redCheck = 0;
                    if (turn == 1) { turn = 2; } else { turn = 1; }
                }
            }
        } else {
            if (point == 1) {
                invalid = 1;
                break;
            }
            if (finalColor[point] == 1) {
                invalid = 1;
                break;
            }
            finalColor[point] = 1;
            if (turn == 1) { score1 += point; } else {
                score2 += point;
            }
        }
    }
    if (invalid == 1) {
        printf("Invalid");
        return 0;
    }
    if (score1 > score2) { printf("First"); } else if (score2 > score1) { printf("Second"); } else printf("Tie");
}
