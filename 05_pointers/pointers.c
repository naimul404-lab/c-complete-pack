#include <stdio.h>

int main(void) {
    int number = 42;
    int *ptr = &number;

    printf("Value: %d\n", number);
    printf("Address: %p\n", (void *)ptr);
    printf("Pointer value: %d\n", *ptr);

    return 0;
}
