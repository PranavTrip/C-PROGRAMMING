//CONVERTING UPPER CASE LETTERS OF A STRING TO LOWER CASE
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], lowstr[50] = "0";
    printf("Enter the string \n");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            lowstr[i] = str[i] + 32;
        }
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            lowstr[i] = str[i];
        }
    }
    printf("The converted string is\n");
    puts(lowstr);
    return 0;
}