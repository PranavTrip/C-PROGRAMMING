//CALCULATING exp(x,y) USING RECURSION
#include <stdio.h>
int expo(int x, int y);
int main()
{
    int num1, num2, res = 1;
    printf("Enter the two numbers\n");
    scanf("%d%d", &num1, &num2);
    res = res * expo(num1, num2);
    printf("The value of exp(%d/%d) is %d", num1, num2, res);
    return 0;
}
int expo(int x, int y)
{
    if (y == 0)
        return 1;
    else
        return x * expo(x, y - 1);
}