//READING MULTIPLE LINES AND DISPLAYING LINE NUMBER BEFORE THE LINE
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i = 0, lcount = 1;
    printf("Enter '*' to end \n");
    printf("Enter the string :\n");
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
        if (lcount == 1 && i == 0)
            printf("\n %d\t", lcount);
        if (str[i] == '\n')
        {
            lcount++;
            printf("\n %d\t", lcount);
        }
        printf("%c", str[i]);
        i++;
    }
    return 0;
}