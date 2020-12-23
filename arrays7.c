//TO READ MARKS OF 10 STUDENTS AND MAKE 10 GROUPS AND COUNT THE NUMBER OF VALUES THAT FALLS IN EACH GROUP
#include <stdio.h>
int main()
{
    int marks[10], group[10] = {0}, count;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the marks of %d student in range 0-100 = ", i);
        scanf("%d", &marks[i]);
        ++group[(int)marks[i] / 10];
    }
    printf("GROUP \t FREQUENCY\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d \t %d\n", i, group[i]);
    }
    return 0;
}