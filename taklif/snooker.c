#include <stdio.h>

int str_len(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        i++;
    }
    return i;
}

int str_cmp(char *str1, char *str2) {
    if (str_len(str1) != str_len(str2)) {
        return 0;
    }
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            return 0;
        }
    }
    return 1;
}

int getPoint(char *string) {
    if (str_cmp(string, "white") == 1) { return 0; }
    if (str_cmp(string, "miss") == 1) { return 0; }
    if (str_cmp(string, "red") == 1) { return 1; }
    if (str_cmp(string, "yellow") == 1) { return 2; }
    if (str_cmp(string, "green") == 1) { return 3; }
    if (str_cmp(string, "brown") == 1) { return 4; }
    if (str_cmp(string, "blue") == 1) { return 5; }
    if (str_cmp(string, "pink") == 1) { return 6; }
    if (str_cmp(string, "black") == 1) { return 7; }
    return -1;
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
