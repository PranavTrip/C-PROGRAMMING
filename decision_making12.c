// FIND THE GREATEST OF THREE NUMBERS
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three numbers\n");
    scanf("%d%d%d", &num1, &num2, &num3);
    if (num1 > num2 && num2 > num3)
    {
        printf("%d is the greatest of the three numbers", num1);
    }
    else if (num1 < num2 && num2 > num3)
    {
        printf("%d is the greatest of three numbers", num2);
    }
    else
    {
        printf("%d is the greatest of three numbers", num3);
    }

    return 0;
}