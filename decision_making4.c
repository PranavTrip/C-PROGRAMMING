// TO CONVERT LOWER CASE INTO UPPER CASE AND VICE VERSA USING IF-ELSE STATEMENTS
#include <stdio.h>
int main()
{
    char input;
    printf("Please enter the character\n");
    scanf("%c", &input);
    if (input >= 'A' && input <= 'Z')
    {
        printf("The entered character is in upper case\n");
        printf("The entered character in lower case is %c", input + 32);
    }
    else if (input >= 'a' && input <= 'z')
    {
        printf("The entered character is in lower case\n");
        printf("The entered character in upper case is %c", input - 32);
    }
    else
    {
        printf("Please enter a valid number\n");
    }
    return 0;
}