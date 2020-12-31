//COMPARING TWO STRINGS

// 0 if both strings are identical (equal)
// negative	if the ASCII value of the first unmatched character is less than the second.
// positive integer	if the ASCII value of the first unmatched character is greater than the second.

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50], str2[50];
    int res;
    printf("Enter string 1\n");
    gets(str1);
    printf("Enter string 2\n");
    gets(str2);
    res = strcmp(str1, str2);
    printf("The string comparision returns %d\n", res);

    return 0;
}