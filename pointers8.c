//READING UNTIL '*' IS ENCOUNTERED AND THEN CLASSIFYING THEM AS LETTERS,DIGITS AND PERFORMING OPERATIONS
#include <stdio.h>
int main()
{
    char ch, *pch = &ch;
    printf("Enter * to exit\n");
    printf("Enter any character\n");
    scanf("%c", pch);
    while (ch != '*')
    {
        if (*pch >= 'A' && *pch <= 'Z')
        {
            printf("The entered character is a letter in upper case\n");
            printf("The same character in lower case is %c\n", *pch + 32);
        }
        else if (*pch >= 'a' && *pch <= 'z')
        {
            printf("The entered character is a letter in lower case\n");
            printf("The same character in upper case is %c\n", *pch - 32);
        }
        else
        {
            printf("The entered chracter is a digit\n");
        }
        fflush(stdin);
        printf("Enter any character\n");
        scanf("%c", pch);
    }

    return 0;
}