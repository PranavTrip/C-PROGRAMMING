// A PROGRAM TO CHECK WHETHER THE ENTERED NUMBER IS EVEN OR ODD
#include <stdio.h>
int main()
{
    int input;
    printf("Please enter the number\n");
    scanf("%d", &input);
    if (input % 2 == 0)
    {
        printf("The entered number is even\n");
    }
    else
    {
        printf("The entered number is odd\n");
    }
    return 0;
}