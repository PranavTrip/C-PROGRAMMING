//REVERSING A STRING
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    printf("Enter the string \n");
    gets(str);
    strrev(str);
    printf("The reversed string is \n");
    puts(str);
    return 0;
}