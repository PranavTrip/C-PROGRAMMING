//TO DISPLAY SQUARE AND CUBE OF FIRST N NATURAL NUMBERS
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    i = 1;
    do
    {
        printf(" Square of %d is %d\n", i, i * i);
        printf("Cube of %d is %d\n", i, i * i * i);
        i++;
    } while (i <= n);

    return 0;
}