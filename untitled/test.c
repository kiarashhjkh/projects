#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr1, *ptr2, size;
    size = sizeof(*ptr1);
    ptr1 = malloc(size);
    printf("%d at %p\n", size, ptr1);
    size = 2 * sizeof(*ptr1);
    ptr2 = realloc(ptr1, size);
    printf("%d at %p\n", size, ptr2);
    printf("%p", ptr1);
    return 0;
}
