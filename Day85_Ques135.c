// Q135: Assign explicit values starting from 10 and print them.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
A=10
B=11
C=12

*/
#include <stdio.h>

enum numbers
{
    TEN = 10,
    ELEVEN,
    TWELVE,
    THIRTEEN,
    FOURTEEN
};

int main()
{
    printf("TEN = %d\n", TEN);
    printf("ELEVEN = %d\n", ELEVEN);
    printf("TWELVE = %d\n", TWELVE);
    printf("THIRTEEN = %d\n", THIRTEEN);
    printf("FOURTEEN = %d\n", FOURTEEN);

    return 0;
}