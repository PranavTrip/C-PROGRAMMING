//READING UNTIL -1 IS ENCOUNTERED AND THEN CLASSIFYING NUMBERS AS PRIME OR COMPOSITE
#include <stdio.h>
int main()
{
    int num, *pnum = &num, flag = 0;
    printf("Enter -1 to exit\n");
    printf("Enter any number\n");
    scanf("%d", pnum);
    while (num != -1)
    {
        if (num == 1)
        {
            printf("1 is neither prime nor composite\n");
        }
        else if (num == 2)
        {
            printf("2 is the only prime and even number\n");
        }
        else
        {
            for (int i = 2; i < *pnum / 2; i++)
            {
                if (*pnum / i == 0)
                    flag == 1;
            }
            if (flag == 0)
            {
                printf("The number is prime\n");
            }
            if (flag == 1)
            {
                printf("The number is composite\n");
            }
        }

        fflush(stdin);
        printf("Enter any number\n");
        scanf("%d", pnum);
    }
    return 0;
}