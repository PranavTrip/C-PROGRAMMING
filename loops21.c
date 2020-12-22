//CALCULATING POWERS X^N
#include <stdio.h>
#include <math.h>
int main()
{
    int x, n, res = 1;
    printf("Enter the value of X and N ");
    scanf("%d%d", &x, &n);
    res = pow(x, n);
    printf("x^n=%d", res);
    return 0;
}