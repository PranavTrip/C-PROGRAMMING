// READ NUMBERS UNTIL -1 IS ENCOUNTERED AND FIND SUM , MEAN
#include <stdio.h>
int main()
{
    int sum = 0, count = 0, mean, num;
    printf("Enter any number except -1\n");
    scanf("%d", &num);
    while (num != (-1))
    {
        sum = sum + num;
        count++;
        printf("Enter any number except -1\n");
        scanf("%d", &num);
    }
    printf("The sum is %d\n", sum);
    mean = sum / count;
    printf("The mean is %d\n", mean);
    return 0;
}