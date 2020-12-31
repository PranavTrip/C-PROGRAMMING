//EXTRACTING LAST N CHARACTERS OF A STRING
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], res[100] = "0";
    int n, i, len = 0;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    fflush(stdin);
    printf("Enter the string\n");
    gets(str);
    len = strlen(str);
    printf("The new string is:\n");
    puts(str + (len - n));
    return 0;
}