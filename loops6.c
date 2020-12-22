//AVERAGE OF NUMBERS ENTERED BY USER
#include <stdio.h>
int main()
{
    int n, num, sum = 0, avg, count = 0;
    printf("How many numbers you want to enter\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number\n");
        scanf("%d", &num);
        sum = sum + num;
        count++;
    }
    printf("The sum os the entered numbers is %d\n", sum);
    avg = sum / count;
    printf("The average of the given numbers is %d\n", avg);
    return 0;
}