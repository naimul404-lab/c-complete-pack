#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main(void) {
    union Data data;

    data.i = 10;
    printf("int: %d\n", data.i);

    data.f = 3.14f;
    printf("float: %.2f\n", data.f);

    data.c = 'A';
    printf("char: %c\n", data.c);

    return 0;
}
