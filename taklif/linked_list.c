#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int x;
    struct Node *nextp;
} Node;

int main() {
    Node root;
    root.x = 1;
    root.nextp = malloc(sizeof(Node));
    root.nextp->x = 3;
    root.nextp->nextp = malloc(sizeof(Node));
    root.nextp->nextp->x = 5;
    root.nextp->nextp->nextp = NULL;

    for (Node *curr = &root; curr != NULL; curr = curr->nextp) {
        printf("%d\n", curr->x);
    }

    free(root.nextp->nextp);
    free(root.nextp);

    return 0;
}
