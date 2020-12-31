//ENTERING A TEXT THAT HAS COMMAS AND REPLACING THEM WITH SEMICOLONS
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], res[50]={0};
    int i = 0;
    printf("Enter the text\n");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ',')
            res[i] = ';';
        else
            res[i] = str[i];
    }
    printf("The replaced text is \n");
    // for (int i = 0; str[i] != '\0'; i++)
        puts(res);
    return 0;
}