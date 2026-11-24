// Q121: Create info.txt in write mode, save user's name and age using fprintf().
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int age;

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\r\n")] = '\0';

    printf("Enter age: ");
    scanf("%d", &age);

    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);

    printf("Data successfully saved to info.txt.\n");
    return 0;
}
