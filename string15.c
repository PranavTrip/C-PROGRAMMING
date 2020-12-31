//READING MULTIPLE LINES UNTIL * IS ENCOUNTERED AND COUNT THE NUMBER OF WORDS,CHARACTERS  AND LINES
#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    int i = 0, wcount = 0, ccount = 0, lcount = 0;
    printf("Enter the text\n");
    scanf("%c", &str[i]);
    while (str[i] != '*')
    {
        i++;
        scanf("%c", &str[i]);
    }
    str[i] = '\0';
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
            wcount++;
        else if (str[i] == '\n')
            lcount++;
        else
            ccount++;
        i++;
    }
    printf("The word count is %d\n", wcount + 1);
    printf("The character count is %d\n", ccount + 1);
    printf("The line count is %d\n", lcount + 1);
    return 0;
}