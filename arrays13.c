//IMPLEMENTING LINEAR SEARCH
#include <stdio.h>
int main()
{
    int i, arr[20], n, val, pos = -1;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf(" Enter the elements in the array \n");
    for (i = 0; i < n; i++)
    {
        printf("ARR[%d]=", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the value you want to find\n");
    scanf("%d", &val);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            pos = i;
            printf("The number is found at  position %d", pos);
        }
    }
    if (pos == -1)
    {
        printf("The desired value is not found in the array\n");
    }
    return 0;
}