//FINDING THE LENGTH OF THE STRING

#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    int length;
    printf("Enter the string\n");
    gets(str);
    length = strlen(str);
    printf("The length of the string is %d", length);
    return 0;
}
