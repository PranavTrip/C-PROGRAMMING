//SUM OF FIRST 10 NUMBERS
#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 0; i <= 10; i++)
    {
        sum = sum + i;
    }
    printf("The sum of first 10 numbers is %d", sum);
    return 0;
}