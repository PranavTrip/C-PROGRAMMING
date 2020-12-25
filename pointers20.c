//READING AND PRINTING A TEXT AND COUNTING THE CHARACTERS, WORDS, LINES
#include <stdio.h>
int main()
{
    char str[100];
    int lines = 1, words = 1, chars = 1;
    char *ptr = str;
    printf("Enter the string\n");
    gets(ptr);
    printf("The entered string is \n");
    puts(ptr);
    while (*ptr != '\0')
    {
        if (*ptr == '\n')
        {
            lines++;
        }
        if (*ptr == ' ' && *(ptr + 1) != ' ')
            words++;
        chars++;
        ptr++;
    }
    printf("Lines=%d\n", lines);
    printf("Words=%d\n", words);
    printf("Characters=%d\n", chars);
    return 0;
}