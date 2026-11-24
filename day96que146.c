// Q146: Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[100];
    float salary;
    struct Date joiningDate;
};

int main() {
    struct Employee emp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    getchar();

    printf("Enter Employee Name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    emp.name[strcspn(emp.name, "\r\n")] = '\0';

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

    printf("\nEmployee Details:\n");
    printf("ID: %d\nName: %s\nSalary: %.2f\nJoining Date: %02d/%02d/%04d\n",
           emp.id, emp.name, emp.salary,
           emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);

    return 0;
}
