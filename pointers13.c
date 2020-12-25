//ADDING TWO NUMBERS USING POINTERS AND FUNCTIONS
#include <stdio.h>
int sum(int *a, int *b);
int main()
{
    int num1, num2, res;
    printf("Enter the values of num1 and num2\n");
    scanf("%d%d", &num1, &num2);
    res = sum(&num1, &num2);
    printf("The sum of %d and %d is %d", num1, num2, res);
    return 0;
}
int sum(int *a, int *b)
{
    int sum = 0;
    sum = sum + (*a + *b);
    return sum;
}