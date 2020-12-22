//PRINTING PATTERNS
/*
1
12
123
1234
12345
*/

#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("\n");
        for (int j = 0; j <= i; j++)
        {
            printf("%d", j + 1);
        }
    }
    return 0;
}