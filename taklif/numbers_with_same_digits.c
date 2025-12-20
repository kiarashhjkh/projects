#include <stdio.h>

int main() {
    int input1, input2, commonCount = 0;
    printf("give me your first number :");
    scanf(" %d", &input1);
    printf("give me your second number :");
    scanf(" %d", &input2);
    int freq1[10] = {0}, freq2[10] = {0};
    while (input1 > 0) {
        freq1[input1 % 10]++;
        input1 /= 10;
    }
    while (input2 > 0) {
        freq2[input2 % 10]++;
        input2 /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (freq1[i] < freq2[i]) {
            commonCount += freq1[i];
        } else { commonCount += freq2[i]; }
    }
    printf("%d", commonCount);
    return 0;
}
