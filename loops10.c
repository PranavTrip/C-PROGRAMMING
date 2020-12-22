//READ A CHARACTER UNTIL * IS ENCOUNTERED AND CLASSIFY THEM INTO UPPER/LOWER CASE AND DIGITS
#include <stdio.h>
int main()
{
    char ch;
    int upcount = 0, lowcount = 0, digit = 0;
    printf("Enter any character except *");
    scanf("%c", &ch);
    do
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            upcount++;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            lowcount++;
        }
        else
        {
            digit++;
        }
        printf("Enter any character except *");
        scanf("%c", &ch);
    } while (ch != '*');
    printf("The upper case letters are %d\n", upcount);
    printf("The lower case letters are %d\n", lowcount);
    printf("The count of digits is %d\n", digit);

    return 0;
}