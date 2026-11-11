#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int main(void) {
    printf("Add: %d\n", add(10, 20));
    printf("Multiply: %d\n", multiply(4, 5));
    return 0;
}
