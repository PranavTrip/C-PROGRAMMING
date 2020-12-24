//IMPLEMENTING BINARY SEARCH
#include <stdio.h>
int main()
{
    int n, arr[50], strt, end, mid, val;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        printf("ARR[%d]=", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the value you want to search\n");
    scanf("%d", &val);
    strt = 0;
    end = n - 1;
    while (strt <= end)
    {
        mid = strt + end;
        if (arr[mid] == val)
        {
            printf("The desired number is found at position %d\n", mid);
            break;
        }
        else if (arr[mid] > val)
        {
            end = mid - 1;
        }
        else
        {
            strt = mid + 1;
        }
        if (strt > end)
        {
            printf("The number does not exist in the array\n");
        }
    }
    return 0;
}