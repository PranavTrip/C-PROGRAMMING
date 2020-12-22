//SUM OF SERIES 1/1^2 + 1/2^2 +....
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    double sum = 0, a;
    printf("Enter the value of n");
    scanf("%d", &n);
    for (float i = 1; i <= n; i++)
    {
        a = 1 / pow(i, 2);
        sum = sum + a;
    }
    printf("The sum of the series till %d is %lf", n, sum);
    return 0;
}