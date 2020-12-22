//A PROGRAM TO CALCULATE P(n/r)
#include <stdio.h>
int calculate(int num);
int main()
{
    int n, r;
    float result;
    printf("Enter the value of n and r\n");
    scanf("%d%d", &n, &r);
    result = (float)calculate(n) / calculate(r);
    printf("P(%d)/(%d) is %f", n, r, result);
    return 0;
}
int calculate(int num)
{
    int f = 1;
    for (int i = num; i >= 1; i--)
    {
        f = f * i;
    }
}