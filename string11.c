//SORT NAMES OF STUDENTS IN A CLASS
#include <stdio.h>
#include <string.h>
int main()
{
    char str[10][10], temp[10];
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1 ; j++)
        {
            if (strcmp(str[j], str[j + 1]) > 0)
                strcpy(temp, str[j]);
            strcpy(str[j], str[j + 1]);
            strcpy(str[j + 1], temp);
        }
    }
    printf("The names of the studemts are\n ");
    for (int i = 0; i < n; i++)
    {
        puts(str[i]);
    }
    return 0;
}