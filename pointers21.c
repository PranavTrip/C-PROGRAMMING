//COPYING A STRING INTO ANOTHER STRING USING POINTERS
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20], str2[50];
    char *pstr1 = str1, *pstr2 = str2;
    printf("Enter string 1\n");
    gets(pstr1);
    printf("The entered string is \n");
    puts(pstr1);
    pstr2 = strcpy(pstr2, pstr1);
    printf("The second string is \n");
    puts(pstr2);
    return 0;
}