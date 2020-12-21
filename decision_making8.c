//TO DETERMINE WHETHER A NUMBER IS POSITIVE , NEGATIVE OR ZERO
#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("The entered number is positive\n");
    }
    else if (num < 0)
    {
        printf("The entered number is negative\n");
    }
    else
    {
        printf("The entered number is zero");
    }
    return 0;
}