// TO FIND THE SECOND LARGEST NUMBER IN AN ARRAY
#include <stdio.h>
int main()
{
    int n, arr[20], largest, slargest, pos;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        printf("Arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            pos = i;
        }
    }
    slargest = arr[n - pos - 1];
    for (int i = 0; i < n; i++)
    {
        if (i != pos)
        {
            if (slargest < arr[i])
            {
                slargest = arr[i];
            }
        }
    }
    printf("The largest among the entered number is %d\n", largest);
    printf("The second largest among the entered numbers is %d\n", slargest);
    return 0;
}