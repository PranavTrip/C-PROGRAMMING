//READING A TEXT AND COUNT A SPECIFIC PATTERN BEING REPEATED
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], pat[20];
    int i = 0, j = 0, count = 0, found = 0, k;
    printf("Enter the string\n");
    gets(str);
    printf("Enter the pattern\n");
    gets(pat);
    while (str[i] != '\0')
    {
        j = 0, k = i;
        while (str[k] == pat[j] && pat[j] != '\0')
        {
            k++;
            j++;
        }
        if (pat[j] == '\0')
        {
            found = 1;
            count++;
        }
        i++;
    }
    if (found == 1)
        printf("Pattern found %d times ", count);
    else
        printf("Not found !");
    return 0;
}