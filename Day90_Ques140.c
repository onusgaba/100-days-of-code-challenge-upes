// Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>

enum Gender
{
    MALE,
    FEMALE,
    OTHER
};

struct Person
{
    char name[50];
    enum Gender gender;
};

int main()
{
    struct Person p;

    printf("Enter your name: ");
    scanf("%s", p.name);

    printf("Enter gender (0 for Male, 1 for Female, 2 for Other): ");
    scanf("%d", &p.gender);

    printf("\nPerson Details\n");
    printf("Name: %s\n", p.name);

    switch(p.gender)
    {
        case MALE:
            printf("Gender: Male");
            break;

        case FEMALE:
            printf("Gender: Female");
            break;

        case OTHER:
            printf("Gender: Other");
            break;

        default:
            printf("Invalid Gender");
    }

    return 0;
}