//FACTORIAL OF A NUMBER ENTERED BY USER
#include <stdio.h>
int main()
{
    int num, fact = 1;
    printf("Enter the number \n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("The factorial of %d is %d", num, fact);
    return 0;
}