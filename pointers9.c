//TEST WHETHER THE ENTERED NUMBER IS POSITIVE,NEGATIVE OR ZERO
#include <stdio.h>
int main()
{
    int num, *pnum = &num;
    printf("Enter any number\n");
    scanf("%d", pnum);
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
        printf("The entered number is 0\n");
    }
    return 0;
}