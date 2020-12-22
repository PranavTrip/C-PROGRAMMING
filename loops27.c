//SUM OF CUBES AND SUM OF SQUARES OF FIRST N NUMBERS
#include <stdio.h>
#include <math.h>
int main()
{
    int n, sumcubes = 0, sumsquares = 0;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sumcubes = sumcubes + pow(i, 3);
        sumsquares = sumsquares + pow(i, 2);
    }
    printf("The sum of cubes of numbers till %d is %d\n", n, sumcubes);
    printf("The sum of squares of numbers till %d is %d\n", n, sumsquares);
    return 0;
}