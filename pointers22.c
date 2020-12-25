// COPYING N ELEMENTS OF A STRING FROM MTH POSITION TO THE SECOND STRING
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20], str2[50], *pstr1 = str1, *pstr2 = str2;
    int m, n, *pm = &m, *pn = &n;
    printf("Enter string 1\n");
    gets(pstr1);
    printf("Enter the value of m\n");
    scanf("%d", &m);
    printf("Enter the value of n\n");
    scanf("%d", &n);
    pstr1 = pstr1 + m;
    int i = 0;
    while (*pstr1 != '\0' && i < n)
    {
        *pstr2 = *pstr1;
        pstr2++;
        pstr1++;
        i++;
    }
    *pstr2 = '\0';
    printf("The copied string is\n");
    puts(str2);

    return 0;
}