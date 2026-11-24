// Q130: Store student records into a file using fprintf() and read them using fscanf().
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    char name[100];
    int roll;
    float marks;

    for (int i = 0; i < n; i++) {
        printf("Enter name, roll number, and marks for student %d: ", i + 1);
        scanf("%99s %d %f", name, &roll, &marks);
        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nStored Student Records:\n");
    while (fscanf(fp, "%99s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll No: %d | Marks: %.2f\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}
