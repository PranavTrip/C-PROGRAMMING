//FACTORIAL OF A NUMBER USING RECURSION
#include <stdio.h>
int fact(int a);
int main()
{
    int num, res;
    printf("Enter the number\n");
    scanf("%d", &num);
    res = fact(num);
    printf("The Factorial of the given number is %d", res);
    return 0;
}
int fact(int a)
{
    if (a == 0)
        return 1;
    else if (a == 1)
        return 1;
    else
        return a * fact(a - 1);
}