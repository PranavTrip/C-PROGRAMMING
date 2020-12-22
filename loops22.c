//TO REVERSE THE GIVEN NUMBER
#include <stdio.h>
int main()
{
    int num, tem;
    printf("Enter the number\n");
    scanf("%d", &num);
    while (num != 0)
    {
        tem = num % 10;
        printf("%d", tem);
        num = num / 10;
    }
    return 0;
}
