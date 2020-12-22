//PRINTING PATTERNS
/*  Pass 1 -  1  2  3  4  5 
    Pass 2 -  1  2  3  4  5 
    Pass 3 -  1  2  3  4  5 
    Pass 4 -  1  2  3  4  5 
    Pass 5 -  1  2  3  4  5 */

#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("Pass %d - ", i + 1);
        for (int j = 0; j < 5; j++)
        {
            printf(" %d ", j + 1);
        }
        printf("\n");
    }
    return 0;
}