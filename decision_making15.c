//CALCULATING ROOTS OF QUADRATIC EQUATION
#include <stdio.h>
#include <math.h>
int main()
{
    int D, root1, root2, a, b, c;
    printf("Enter the values of a,b,c\n");
    scanf("%d%d%d", &a, &b, &c);
    D = (b * b) - 4 * a * c;
    if (D == 0)
    {
        printf("The roots of the equation are equal\n");
        root1 = root2 = (-b / (2 * a));
        printf("The roots of the equation are %d,%d", root1, root2);
    }
    else if (D > 0)
    {
        root1 = (-b - sqrt(D)) / (2 * a);
        root2 = (-b + sqrt(D)) / (2 * a);
        printf("The roots are %d,%d", root1, root2);
    }
    else
    {
        printf("The roots are imaginary\n");
    }
    return 0;
}