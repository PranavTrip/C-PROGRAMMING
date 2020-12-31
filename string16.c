//COPYING N CHARACTERS OF A STRING FROM MTH POSITION TO ANOTHER STRING
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50], str2[100] = "0";
    int m, n;
    printf("Enter the string that is to be copied\n");
    gets(str1);

    printf("Enter the position from where you want to start copying\n");
    scanf("%d", &m);
    fflush(stdin);
    printf("Enter the position till where you want to copy\n");
    scanf("%d", &n);
    for (int i = 0; i < m; i++)
        strncpy(str2, str1 + m, n);
    puts(str2);

    return 0;
}