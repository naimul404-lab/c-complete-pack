#include <stdio.h>

int main(void) {
    int i;

    for (i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    printf("While loop:\n");
    i = 1;
    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}
