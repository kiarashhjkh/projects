#include <stdio.h>

int main() {
    int line, space, stars;
    printf("give me the number of lines for your pyramid :");
    scanf("%d", &line);
    stars = 1;
    for (line; line > 0; line--) {
        space = line - 1;
        for (int i = 0; i < stars; i++) {
            for (space; space > 0; space--) {
                printf(" ");
            }
            printf("*");
        }
        stars+=2;
        printf("\n");
    }
    return 0;
}
