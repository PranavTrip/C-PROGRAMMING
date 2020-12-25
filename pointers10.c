//A PROGRAM TO DISPLAY SUM AND AVERGAE OF NUMBERS FROM 'M' TO 'N' USING POINTERS
#include <stdio.h>
int main()
{
    int m, n, *pm = &m, *pn = &n;
    double sum = 0, avg = 0;
    fflush(stdin);
    printf("Enter the values of m and n\n");
    scanf("%d%d", pm, pn);
    for (int i = *pm; i <= *pn; i++)
    {
        sum = sum + i;
        
    }
    printf("The sum of numbers from m to n is %0.2lf\n", sum);
    avg = (sum / n - m);
    printf("THe average of the numbers from m to n is %0.3lf\n", avg);
    return 0;
}