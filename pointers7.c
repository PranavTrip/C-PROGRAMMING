//CHECKING WHETHER THE INPUT IS A CHARACTER OR DIGIT AND PERFORMING OPERATION ON IT
#include <stdio.h>
int main()
{
    char ch, *pch = &ch;
    printf("GIve your input\n");
    scanf("%c", pch);
    if (*pch >= 'A' && *pch <= 'Z')
    {
        printf("The entered character is a alphabetical letter\n");
        printf("THe letter is in upper case\n");
        printf("The same letter in lower case is %c", *pch + 32);
    }
    else if (*pch >= 'a' && *pch <= 'z')
    {
        printf("The entered character is a alphabetical letter\n");
        printf("THe letter is in lower case\n");
        printf("The same letter in upper case is %c", *pch - 32);
    }
    else
    {
        printf("The entered character is a digit\n");
    }
    return 0;
}
