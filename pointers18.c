//FINDING MEAN OF N NUMBERS USING ARRAYS AND POINTERS
#include <stdio.h>
int main()
{
    int arr[30], n, *pn = &n, sum = 0;
    int *ptr = arr;
    double mean;
    printf("Enter the value of n\n");
    scanf("%d", pn);
    printf("Enter the elements of the array\n");
    for (int i = 0; i < *pn; i++)
    {
        printf("ARRAY[%d]=", i);
        scanf("%d", ptr + i);
    }
    printf("The array is\n");
    for (int i = 0; i < *pn; i++)
    {
        printf("ARRAY[%d]=%d\n", i, *(ptr + i));
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + (*ptr + i);
    }
    mean = (double)sum / *pn;
    printf("The sum of the elements of the arrays is %d\n", sum);
    printf("The mean of the elements of the array is %0.2lf\n", mean);
    return 0;
}