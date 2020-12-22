//PROGRAM TO CALCULATE AVERAGE OF FIRST 'N' NUMBERS
#include <stdio.h>
int main()
{
    int n, sum = 0, avg, count = 0;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
        count++;
    }
    printf("The sum of the entered numbers is %d\n", sum);
    avg = sum / count;
    printf("The average of the numbers entered is %d\n", avg);
    return 0;
}