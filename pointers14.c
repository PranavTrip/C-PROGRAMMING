//FINDING BIGGEST OF 3 NUMBERS USING POINTERS AND FUNCTIONS
#include <stdio.h>
int biggest(int *a, int *b, int *c);
int main()
{
    int num1, num2, num3, res;
    printf("Enter the three numbers\n");
    scanf("%d%d%d", &num1, &num2, &num3);
    res = biggest(&num1, &num2, &num3);
    printf("The biggest of three numbers is %d", res);
    return 0;
}
int biggest(int *a, int *b, int *c)
{
    if (*a > *b && *a > *c)
    {
        return *a;
    }
    else if (*a<*b && * b> * c)
    {
        return *b;
    }
    else
    {
        return *c;
    }
}