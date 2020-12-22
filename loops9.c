//A PROGRAM TO LIST ALL THE LEAP YEARS FROM 1900 TO 2100
#include <stdio.h>
int main()
{
    int m = 1900, n = 2100;
    for (int i = m; i <= n; i++)
    {
        if (i % 4 == 0)
        {
            printf("%d : The year is a leap year\n", i);
        }
        else
        {
            //printf("%d : The year is not a leap year\n", i);
        }
    }

    return 0;
}