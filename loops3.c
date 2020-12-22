// SUM OF NUMBERS FROM 'M' TO 'N'
#include <stdio.h>
int main()
{
    int m, n;
    int sum = 0;
    printf("Enter the value of m\n");
    scanf("%d", &m);
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (int i = m; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("The sum of numbers from M to N is %d", sum);
    return 0;
}