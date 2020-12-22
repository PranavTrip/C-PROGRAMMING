//SUM OF SERIES 1/1! + 1/2! + ... USING FUNCTIONS
#include <stdio.h>
int Fact(int num);
int main()
{
    int n, f;
    double result = 0;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        f = Fact(i);
        result = result + 1 / (float)f;
    }
    printf("The sum of the series till %d is %lf", n, result);
    return 0;
}
int Fact(int num)
{
    int f = 1;
    for (int i = num; i >= 1; i--)
    {
        f = f * i;
        return f;
    }
}
