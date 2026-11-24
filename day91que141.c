// Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.
#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;

    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\r\n")] = '\0';

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent Details:\n");
    printf("Name: %s\nRoll No: %d\nMarks: %.2f\n", s.name, s.roll_no, s.marks);

    return 0;
}
