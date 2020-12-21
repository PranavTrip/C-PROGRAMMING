// CALCULATING AGGREGATE AND FINDING GRADES
#include <stdio.h>
int main()
{
    int m1, m2, m3, m4;
    double aggregate;
    printf("Enter the marks in 4 subjects\n");
    scanf("%d%d%d%d", &m1, &m2, &m3, &m4);
    aggregate = (m1 + m2 + m3 + m4) / 4;
    printf("The aggregate of studemt is %lf\n", aggregate);
    if (aggregate > 90 && aggregate <= 100)
    {
        printf("GRADE A\n");
    }
    else if (aggregate > 80 && aggregate <= 90)
    {
        printf("GRADE B\n");
    }
    else if (aggregate > 70 && aggregate <= 80)
    {
        printf("GRADE C\n");
    }
    else if (aggregate > 60 && aggregate <= 70)
    {
        printf("GRADE D\n");
    }
    else
    {
        printf("FAIL\n");
    }
    return 0;
}