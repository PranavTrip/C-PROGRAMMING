//DIWALI BONUS FOR MALE AND FEMALE WORKERS
#include <stdio.h>
int main()
{
    int bonus, salary, total;
    char gender;
    printf("Enter the gender of employee\n");
    scanf("%c", &gender);
    printf("Enter the salary of employee\n");
    scanf("%d", &salary);
    if (gender = 'm')
    {
        bonus = (0.05 * salary);
    }
    if (gender = 'f')
    {
        bonus = (0.10 * salary);
    }
    if (salary < 10000)
    {
        bonus = (0.02 * salary);
    }
    total = salary + bonus;
    printf("The bonus offered to the employee is %d\n", bonus);
    printf("The total salary of the employee is %d\n", total);
    return 0;
}