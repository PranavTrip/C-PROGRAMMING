//READING A SENTENCE AND COUNTING THE NUMBER OF WORDS
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i = 0, count = 0;
    printf("Enter the string\n");
    gets(str);
    while (str[i] != '\0')
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {

            count++;
        }
        i++;
    }

    printf("The number of words in the sentence is %d ", count + 1);
    return 0;
}