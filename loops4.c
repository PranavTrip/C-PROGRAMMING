//LARGEST OF FIVE NUMBERS
#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("Enter five numbers\n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    if (a > b && b > c && c > d && d > e)
    {
        printf("%d is the largest", a);
    }
    else if (a < b && b > c && c > d && d > e)
    {
        printf("%d is the largest\n", b);
    }
    else if (a < b && b < c && c > d && d > e)
    {
        printf("%d is the largest\n", c);
    }
    else if (a < b && b < c && c < d && d > e)
    {
        printf("%d is the largest\n", d);
    }
    else
    {
        printf("%d is the largest\n", e);
    }
    return 0;
}