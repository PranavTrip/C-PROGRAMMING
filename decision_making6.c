//PROGRAM TO FIND WHETHER A YEAR IS LEAP OR NOT
#include <stdio.h>
int main()
{
    int year;
    printf("Enter any year\n");
    scanf("%d", &year);
    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
    {
        printf("The year is a leap year\n");
    }
    else
    {
        printf("The year is a normal year");
    }
    return 0;
}