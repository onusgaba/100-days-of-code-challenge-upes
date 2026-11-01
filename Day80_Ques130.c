//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int roll, n, i;
    float marks;

    fp = fopen("student.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    
    for (i = 1; i <= n; i++)
    {
        printf("\nEnter name: ");
        scanf("%s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %f\n", name, roll, marks);
    }

    fclose(fp);

    
    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    printf("\n--- Student Records ---\n");

    while (fscanf(fp, "%s %d %f", name, &roll, &marks) == 3)
    {
        printf("\nName: %s", name);
        printf("\nRoll Number: %d", roll);
        printf("\nMarks: %.2f\n", marks);
    }

    fclose(fp);

    return 0;
}