// Q143: Find and print the student with the highest marks.
#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];
    for (int i = 0; i < n; i++) {
        printf("Enter name, roll_no, and marks for student %d: ", i + 1);
        scanf("%99s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    int topIdx = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[topIdx].marks) {
            topIdx = i;
        }
    }

    printf("\nTop Student:\nName: %s | Roll No: %d | Marks: %.2f\n",
           s[topIdx].name, s[topIdx].roll_no, s[topIdx].marks);

    return 0;
}
