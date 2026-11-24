// Q142: Store details of 5 students in an array of structures and print all.
#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter name, roll_no, and marks for student %d: ", i + 1);
        scanf("%99s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    printf("\nAll Student Records:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. Name: %s | Roll No: %d | Marks: %.2f\n",
               i + 1, s[i].name, s[i].roll_no, s[i].marks);
    }

    return 0;
}
