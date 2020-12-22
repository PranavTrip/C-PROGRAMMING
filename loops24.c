//SUM OF SERIES 1/1 +1/2 + ...
#include <stdio.h>
int main()
{
    int n;
    double sum = 0.0, a;
    printf("Please enter value of n\n");
    scanf("%d", &n);
    for (float i = 1; i <= n; i++)
    {
        a = 1 / i;
        sum = sum + a;
    }
    printf("The sum of the series till %d is %lf", n, sum);
    return 0;
}