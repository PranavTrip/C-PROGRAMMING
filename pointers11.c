//PRINTING ALL EVEN NUMBERS FROM M TO N
#include <stdio.h>
int main()
{
    int m, n, *pm = &m, *pn = &n;
    printf("Enter the values of m and n\n");
    scanf("%d%d", pm, pn);
    for (int i = m; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("The even numbers from %d to %d are %d\n", *pm, *pn, i);
        }
    }
    return 0;
}