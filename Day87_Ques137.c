//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>

enum Role
{
    ADMIN,
    USER,
    GUEST
};

int main()
{
    enum Role r;

    r = ADMIN;

    switch(r)
    {
        case ADMIN:
            printf("Welcome Admin! You have full access.");
            break;

        case USER:
            printf("Welcome User! You have normal access.");
            break;

        case GUEST:
            printf("Welcome Guest! You have limited access.");
            break;

        default:
            printf("Invalid Role.");
    }

    return 0;
}