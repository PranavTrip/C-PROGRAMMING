// WHETHER THE ENTERED STRING IS A PALINDROME OR NOT
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i = 0, j, length = 0;
    printf("Enter the string \n");
    gets(str);
    while (str[i] != '\0')
    length++;
    i++;
    i = 0;
    j = length - 1;
    while (i <= length / 2)
    {
        if (str[i] == str[j])
        {
            i++;
            j--;
        }
        else
        break;
    }
    if (i >= j)
        printf("PALINDROME\n");
    else
        printf("NOT PALINDROME\n");
    return 0;
}