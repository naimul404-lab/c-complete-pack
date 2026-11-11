#include <stdio.h>

int main(void) {
    FILE *file = fopen("sample.txt", "w");
    if (file == NULL) {
        perror("fopen");
        return 1;
    }

    fprintf(file, "Hello from C file I/O!\n");
    fclose(file);

    file = fopen("sample.txt", "r");
    if (file == NULL) {
        perror("fopen");
        return 1;
    }

    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    fclose(file);
    return 0;
}
