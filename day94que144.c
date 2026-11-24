// Q144: Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

void printStudent(struct Student s) {
    printf("Name: %s\nRoll No: %d\nMarks: %.2f\n", s.name, s.roll_no, s.marks);
}

int main() {
    struct Student s;
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\r\n")] = '\0';

    printf("Enter roll number and marks: ");
    scanf("%d %f", &s.roll_no, &s.marks);

    printStudent(s);
    return 0;
}
