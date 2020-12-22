//FIND WHETHER THE GIVEN NUMBER IS AN ARMSTRONG NUMBER OR NOT
#include <stdio.h>
#include <math.h>
int main()
{
    int num, n, cubes, sum = 0;
    printf("Enter the number\n");
    scanf("%d", &num);
    n = num;
    while (n > 0)
    {
        cubes = n % 10;
        sum = sum + pow(cubes, 3);
        n = n / 10;
    }
    if (sum == num)
    {
        printf("%d is an ARMSTRONG NUMBER", num);
    }
    else
    {
        printf("%d is not an ARMSTRONG NUMBER", num);
    }
    return 0;
}