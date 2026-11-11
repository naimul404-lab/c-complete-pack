#include <stdio.h>

struct Student {
    int id;
    char name[30];
    float grade;
};

int main(void) {
    struct Student s = {101, "Alice", 90.5f};

    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("Grade: %.2f\n", s.grade);

    return 0;
}
