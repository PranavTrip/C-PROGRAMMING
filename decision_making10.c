//DISPLAY THE EXAMINATION RESULTS
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter marks out of 100\n");
    scanf("%d", &marks);
    if (marks <= 100 && marks > 90)
    {
        printf("GRADE A");
    }
    else if (marks <= 90 && marks > 80)
    {
        printf("GRADE B");
    }
    else if (marks <= 80 && marks > 70)
    {
        printf("GRADE C");
    }
    else if (marks <= 70 && marks > 60)
    {
        printf("GRADE D");
    }
    else
    {
        printf("FAIL");
    }
    return 0;
}