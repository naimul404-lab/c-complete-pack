#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int count = 5;
    int *arr = malloc(count * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < count; i++) {
        arr[i] = i + 1;
    }

    FILE *file = fopen("numbers.bin", "wb");
    if (file == NULL) {
        perror("fopen");
        free(arr);
        return 1;
    }

    fwrite(arr, sizeof(int), count, file);
    fclose(file);

    free(arr);
    printf("Binary data written to numbers.bin\n");
    return 0;
}
