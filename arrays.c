//READ AND DISPLAY 'N' NUMBERS USING ARRAYS
#include <stdio.h>
int main()
{
    int n, arr[20];
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for (int i = 0; i < n; i++)
    {
        printf("Arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < n; j++)
    {
        printf("Arr[%d]=%d\n", j, arr[j]);
    }
    return 0;
}