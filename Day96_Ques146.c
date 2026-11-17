// Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/


#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[50];
    float salary;
    struct Date joiningDate;  
};

int main(void) {
    struct Employee emp;

    printf("Enter employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter name: ");
    scanf(" %49[^\n]", emp.name);

    printf("Enter salary: ");
    scanf("%f", &emp.salary);

    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d", &emp.joiningDate.day,
                      &emp.joiningDate.month,
                      &emp.joiningDate.year);

    printf("\n--- Employee Details ---\n");
    printf("ID           : %d\n", emp.id);
    printf("Name         : %s\n", emp.name);
    printf("Salary       : %.2f\n", emp.salary);
    printf("Joining Date : %02d/%02d/%d\n",
           emp.joiningDate.day,
           emp.joiningDate.month,
           emp.joiningDate.year);

    return 0;
}