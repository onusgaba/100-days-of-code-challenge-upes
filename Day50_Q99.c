#include <stdio.h>

int main() {
    char date[20];

    printf("Enter date (dd/04/yyyy): ");
    scanf("%s", date);

    date[2] = '-';
    date[3] = 'A';
    date[4] = 'p';
    date[5] = 'r';
    date[6] = '-';

    printf("Converted date: %s\n", date);

    return 0;
}
