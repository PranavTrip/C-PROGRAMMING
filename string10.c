//READ AND PRINT NAMES OF STUDENTS IN A CLASS
#include <stdio.h>
#include <string.h>
int main()
{
    char str[10][10];
    int n;
    printf("Enter the number of students\n");
    scanf("%d", &n);
    fflush(stdin);
    printf("Enter the names of the students\n");
    for (int i = 0; i < n; i++)
    {
        printf("Name %d\n ", i + 1);
        gets(str[i]);
    }
    printf("The names of the studemts are\n ");
    for (int i = 0; i < n; i++)
    {
        puts(str[i]);
    }
    return 0;
}