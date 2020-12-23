//READ A SORTED LIST OF FLOATING POINT NUMBERS AND FIND THE MEDIAN
#include <stdio.h>
int main()
{
    double num, arr[50], median;
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Enter the numbers\n");
    for (int i = 0; i < n; i++)
    {
        printf("%dst number = ", i + 1);
        scanf("%lf", &arr[i]);
    }

    if (n % 2 == 0)
    {
        median = (arr[n / 2] + arr[n / 2 + 1]) / 2.0;
    }
    else
    {
        median = arr[n / 2];
    }
    printf("The median of the sorted list is %lf", median);

    return 0;
}