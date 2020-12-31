//PRINTING PATTERN USING STRINGS
/*
H 
H E 
H E L 
H E L L 
H E L L O 
H E L L O 
H E L L 
H E L 
H E 
H
*/

#include <stdio.h>
int main()
{
    char str[] = "HELLO";
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", str[j]);
        }
        printf("\n");
    }
    for (int i = 4; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", str[j]);
        }
        printf("\n");
    }
    return 0;
}