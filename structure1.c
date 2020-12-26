//LARGEST OF THREE NUMBERS USING STRUCTURES
#include <stdio.h>
struct large
{
    int a, b, c;
};
int main()
{
    struct large num;
    printf("Enter the numbers\n");
    scanf("%d%d%d", &num.a, &num.b, &num.c);
    if (num.a > num.b && num.a > num.c)
        printf("%d is the largest\n", num.a);
    else if (num.a < num.b && num.b > num.c)
        printf("%d is the largest\n", num.b);
    else
        printf("%d is the largest\n", num.c);
    return 0;
}