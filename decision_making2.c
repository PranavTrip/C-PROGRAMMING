// A PROGRAM TO DETERMINE THE CHARACTER ENTERED THE USER
#include <stdio.h>
int main()
{
    char input;
    printf("Enter your choice\n");
    scanf("%c", &input);
    if (input > 'A' && input < 'Z')
    {
        printf("The entered character is an alphabetical letter in upper case\n");
    }
    else if (input > 'a' && input < 'z')
    {
        printf("The entered character is an alphabetical letter in lower case\n");
    }
    else
    {
        printf("The entered character is a digit\n");
    }
    return 0;
}