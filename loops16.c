//PRINTING PATTERNS
/*
1
22
333
4444
55555
*/

#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("\n");
        for (int j = 0; j <= i; j++)
        {
            printf("%d", i + 1);
        }
    }
    return 0;
}