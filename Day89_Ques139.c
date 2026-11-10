//Q139: Show that enums store integers by printing assigned values.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2

*/
#include <stdio.h>

enum Numbers
{
    ONE = 10,
    TWO = 20,
    THREE = 30,
    FOUR = 40
};

int main()
{
    enum Numbers n;

    for(n = ONE; n <= FOUR; n++)
    {
        printf("%d\n", n);
    }

    return 0;
}
