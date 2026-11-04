//Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>

enum months
{
    JANUARY = 1, FEBRUARY, MARCH, APRIL,
    MAY, JUNE, JULY, AUGUST,
    SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int main()
{
    enum months m;

    for(m = JANUARY; m <= DECEMBER; m++)
    {
        switch(m)
        {
            case JANUARY:
            case MARCH:
            case MAY:
            case JULY:
            case AUGUST:
            case OCTOBER:
            case DECEMBER:
                printf("%d days\n", 31);
                break;

            case APRIL:
            case JUNE:
            case SEPTEMBER:
            case NOVEMBER:
                printf("%d days\n", 30);
                break;

            case FEBRUARY:
                printf("%d days\n", 28);
                break;
        }
    }

    return 0;
}