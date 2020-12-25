//ADDING TWO DECIMAL NUMBERS USING POINTERS
#include <stdio.h>
int main()
{
    double a, b, sum = 0;
    double *pa = &a, *pb = &b;
    printf("Enter the values of a and b\n");
    scanf("%lf%lf", pa, pb);
    sum = sum + (*pa) + (*pb);
    printf("The sum of %lf and %lf is %0.2lf", *pa, *pb, sum);
    return 0;
}