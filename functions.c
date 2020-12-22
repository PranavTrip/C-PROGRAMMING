//ADD TWO INTEGER USING FUNCTIONS
#include <stdio.h>
int sum(int a, int b);
int main()
{
    int num1, num2, total = 0;
    printf("Enter two numbers\n");
    scanf("%d%d", &num1, &num2);
    total = sum(num1, num2);
    printf("The sum of two numbers is %d", total);
    return 0;
}
int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}