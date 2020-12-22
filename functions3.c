//AREA OF CIRCLE USING FUNCTIONS
#include <stdio.h>
int area(int r);
int main()
{
    int rad, result;
    printf("Enter the radius of the circle\n");
    scanf("%d", &rad);
    result = area(rad);
    printf("The area of the circle with radius %d is %d", rad, result);
    return 0;
}
int area(int r)
{
    int res;
#define PI 3.14
    res = PI * r * r;
    return res;
}