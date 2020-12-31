//EXTRACTING FIRST N CHARACTERS OF A STRING
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], res[50] = "0";
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    fflush(stdin);
    printf("Enter the string\n");
    gets(str);
    strncpy(res, str, n);
    printf("The copied characters are\n");
    puts(res);
    return 0;
}