//PRINTING A CHARACTER , FINDING ITS ASCII VALUE AND CONVERTING THE CHARACTER INTO UPPER CASE
#include <stdio.h>
int main()
{
    char ch, *pch = &ch;
    printf("Enter the character\n");
    scanf("%c", pch);
    printf("The entered character is %c\n", *pch);
    printf("The ASCII code of %c is %d\n", *pch, *pch);
    printf("%c in upper case is %c\n", *pch, *pch - 32);
    return 0;
}