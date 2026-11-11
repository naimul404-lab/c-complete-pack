#include <stdio.h>
#include <string.h>

int main(void) {
    char name[] = "Alice";
    printf("Name: %s\n", name);
    printf("Length: %zu\n", strlen(name));

    char greeting[30] = "Hello, ";
    strcat(greeting, name);
    printf("Greeting: %s\n", greeting);
    return 0;
}
