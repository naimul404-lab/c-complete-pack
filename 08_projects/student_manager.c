#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 20

struct Student {
    int id;
    char name[30];
    float mark;
};

int main(void) {
    struct Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    while (1) {
        printf("\nStudent Manager\n1. Add student\n2. List students\n3. Exit\nChoose: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count >= MAX_STUDENTS) {
                printf("Maximum student limit reached.\n");
                continue;
            }
            printf("Enter ID: ");
            scanf("%d", &students[count].id);
            printf("Enter name: ");
            scanf("%29s", students[count].name);
            printf("Enter mark: ");
            scanf("%f", &students[count].mark);
            count++;
        } else if (choice == 2) {
            for (int i = 0; i < count; i++) {
                printf("%d | %s | %.2f\n",
                       students[i].id,
                       students[i].name,
                       students[i].mark);
            }
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
