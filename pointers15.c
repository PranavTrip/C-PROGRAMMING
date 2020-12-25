//AREA OF TRIANGLE USING POINTERS AND FUNCTIONS SIMULTANEOUSLY
#include <stdio.h>
int area(int *b, int *h);
int main()
{
    int base, height, res;
    printf("Enter the base and height of the triangle\n");
    scanf("%d%d", &base, &height);
    res = area(&base, &height);
    printf("The area of the triangle with base %d and height %d = %0.2lf\n", base, height, res);
    return 0;
}
int area(int *b, int *h)
{
    double area;
    area = 0.5 * (*b) * (*h);
    return area;
}