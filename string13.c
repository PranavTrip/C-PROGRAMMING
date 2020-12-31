//READ AND PRINT UNTIL '*' IS ENCOUNTERED AND COUNT THE CHARACTERS
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i = 0;
    printf("Enter * to exit\n");
    printf("Enter the text\n");
    scanf("%c", &str[i]);
    while (str[i] != '*')
    {
        i++;
        scanf("%c", &str[i]);
    }
    str[i] = '\0';
    printf("The entered text is \n");
    i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("The count of the characters is %d", i);
    return 0;
}