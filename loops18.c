//PRINT ALL NUMBERS FROM 'M' TO 'N' AND CLASSIFY THEM AS EVEN OR ODD
#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter the value of m and n ");
    scanf("%d%d", &m, &n);
    for (int i = m; i <= n; i++)
    {

        if (i % 2 == 0)
        {
            printf("%d is even\n", i);
        }
        else
        {
            printf("%d is odd\n", i);
        }
    }
    return 0;
}