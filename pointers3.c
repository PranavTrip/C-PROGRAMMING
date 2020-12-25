//CACLCULATING AREA OF A CIRCLE USING POINTERS
#include <stdio.h>
#include <math.h>
#define PI 3.14
int main()
{
    int r, *pr = &r;
    double area;
    printf("Enter the radius of the circle\n");
    scanf("%d", pr);
    area = PI * pow(*pr, 2);
    printf("The area of the circle with radius %d is %0.3lf", *pr, area);
    return 0;
}