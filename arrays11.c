//DELETING ANY NUMBER FROM AN ARRAY
#include <stdio.h>
int main()
{
    int n, arr[20], pos, num;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Enter the values in the array\n");
    for (int i = 0; i < n; i++)
    {
        printf("ARR[%d]=", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the position at which you want deletion to occur\n");
    scanf("%d", &pos);
    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;
    printf("The new array is\n");
    for (int i = 0; i < n; i++)
    {
        printf("ARR[%d]=%d\n", i, arr[i]);
    }
    return 0;
}