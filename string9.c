//EXTRACTING A SUBSTRING FROM A GIVEN STRING
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], sstr[50] = "0";
    int m, n;
    printf("Enter the number from extraction is starting\n");
    scanf("%d", &m);
    printf("Enter the number till where the extraction is to be done\n");
    scanf("%d", &n);
    fflush(stdin);
    printf("Enter the main string\n");
    gets(str);
    for (int i = 0; i < m; i++)
    {
        strncpy(sstr, str + m, n);
    }
    printf("The substring is \n");
    puts(sstr);
    return 0;
}