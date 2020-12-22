//FINDING GREATEST OF 3 NUMBERS USING FUNCTIONS
#include <stdio.h>
int greatest(int a, int b, int c);
int main()
{
    int num1, num2, num3;
    printf("Enter three numbers\n");
    scanf("%d%d%d", &num1, &num2, &num3);
    greatest(num1, num2, num3);
    printf("The greatest of three numbers is %d", greatest(num1,num2,num3));
    return 0;
}
int greatest(int a, int b, int c)
{
    if (a > b && b > c)
        return a;
    if (a < b && b > c)
        return b;
    if(a<b && b<c)
        return c;
}