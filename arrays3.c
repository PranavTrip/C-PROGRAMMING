//INTERCHANGING LARGEST AND SMALLEST NUMBERS IN AN ARRAY
#include <stdio.h>
int main()
{
    int n, arr[50], large, small, largepos = 0, smallpos = 0, temp;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        printf("Arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
    small = arr[0];
    large = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
            smallpos++;
        }
        if (arr[i] > large)
        {
            large = arr[i];
            largepos++;
        }
    }
    printf("The smallest and largest numbers in this array are %d and %d\n", small, large);
    printf("The position of smallest and largest number in the array is %d and %d\n", smallpos + 1, largepos + 1);
    temp = arr[largepos];
    arr[largepos] = arr[smallpos];
    arr[smallpos] = temp;
    printf("The new array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("Arr[%d]=%d\n", i, arr[i]);
    }
    return 0;
}