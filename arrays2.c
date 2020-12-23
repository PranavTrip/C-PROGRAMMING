//TO PRINT THE POSITION OF SMALLEST NUMBER IN THE GIVEN ARRAY
#include <stdio.h>
int main()
{
    int arr[20], n, smallpos = 0, small;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {

        printf("Arr[%d]=", i);
        scanf("%d", &arr[i]);
        if (arr[i] < small)
        {
            small = arr[i];
            smallpos = i;
        }
    }
    printf("The position of the smallest number is %d", smallpos + 1);
    return 0;
}