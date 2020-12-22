//CLASSIFICATION OF  PRIME AND COMPOSITE NUMBERS
#include <stdio.h>
int main()
{
    int num, flag = 0;
    printf("Enter any number\n");
    scanf("%d", &num);
    for (int i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("%d is composite\n", num);
    }
    else
    {
        printf("%d is prime\n",num);
    }
    return 0;
}