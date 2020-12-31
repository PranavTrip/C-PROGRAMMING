//CONVERTING LOWER CASE LETTERS OF A STRING TO UPPER CASE
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], upstr[50] = "0";
    printf("Enter the string \n");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            upstr[i] = str[i] - 32;
        }
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            upstr[i] = str[i];
        }
    }
    printf("The converted string is\n");
    puts(upstr);
    return 0;
}