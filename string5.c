//CONCATENATING TWO STRINGS
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50], str2[50];
    printf("Enter string 1\n");
    gets(str1);
    printf("Enter string 2\n");
    gets(str2);
    strcat(str1, str2);
    printf("The concatenated string is \n");
    puts(str1);
    return 0;
}