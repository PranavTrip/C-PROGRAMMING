// A PROGRAM TO CALCULATE GCD USING RECURSION
#include <stdio.h>
int GCD(int x, int y);
int main()
{
    int num1, num2, res;
    printf("Enter the values of the two numbers\n");
    scanf("%d%d", &num1, &num2);
    res = GCD(num1, num2);
    printf("The GCD of %d and %d is %d", num1, num2, res);
    return 0;
}
int GCD(int x, int y)
{
    int rem;
    rem = x % y;
    if (rem == 0)
        return y;
    else
        return (GCD(y, rem));
}