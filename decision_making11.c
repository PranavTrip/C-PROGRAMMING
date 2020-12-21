// INCOME TAX AND CONDITIONS
#include <stdio.h>
int main()
{
    int income, tax;
    printf("Enter income in lacs\n");
    scanf("%d", &income);
    if (income < 150000)
    {
        printf("NO TAX\n");
    }
    else if (income > 150000 && income < 300000)
    {
        tax = (0.10 * income);
    }
    else if (income > 300000 && income < 500000)
    {
        tax = (0.20 * income);
    }
    else
    {
        tax = (0.30 * income);
    }
    printf("The required tax to be paid is %d", tax);
    return 0;
}