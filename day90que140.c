// Q140: Define a struct with enum Gender and print person's gender.
#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[100];
    enum Gender gender;
};

int main() {
    struct Person p;
    int g;

    printf("Enter name: ");
    fgets(p.name, sizeof(p.name), stdin);
    p.name[strcspn(p.name, "\r\n")] = '\0';

    printf("Enter gender (0=MALE, 1=FEMALE, 2=OTHER): ");
    scanf("%d", &g);
    p.gender = (enum Gender)g;

    printf("Name: %s\nGender: ", p.name);
    if (p.gender == MALE) printf("Male\n");
    else if (p.gender == FEMALE) printf("Female\n");
    else printf("Other\n");

    return 0;
}
