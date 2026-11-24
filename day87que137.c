// Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    int r;
    printf("Enter role (0=ADMIN, 1=USER, 2=GUEST): ");
    scanf("%d", &r);

    switch ((enum Role)r) {
        case ADMIN:
            printf("Welcome Admin! Full access granted.\n");
            break;
        case USER:
            printf("Welcome User! Standard access granted.\n");
            break;
        case GUEST:
            printf("Welcome Guest! Read-only access granted.\n");
            break;
        default:
            printf("Invalid role.\n");
    }

    return 0;
}
