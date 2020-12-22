//SUM OF THE SERIES 1/2 + 2/3 + 3/4 + ...
#include <stdio.h>
int main()
{
    int n;
    double sum = 0, a;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (float i = 1; i <= n; i++)
    {
        a = i / (i + 1);
        sum = sum + a;
    }
    printf("The sum of the series till %d is %lf", n, sum);
    return 0;
}