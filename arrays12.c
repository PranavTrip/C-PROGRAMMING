//MERGING TWO UNSORTED ARRAYS
#include <stdio.h>
int main()
{
    int arr[20], ARR[20], res[50], index = 0, n1, n2, m;
    printf("Enter the values of n1 and n2\n");
    scanf("%d%d", &n1, &n2);
    printf("Enter the values int the first array\n");
    for (int i = 0; i < n1; i++)
    {
        printf("ARR[%d]=", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the values in the second array\n");
    for (int i = 0; i < n2; i++)
    {
        printf("ARR[%d]=", i);
        scanf("%d", &ARR[i]);
    }
    for (int i = 0; i < n1; i++)
    {
        res[index] = arr[i];
        index++;
    }
    for (int i = 0; i < n2; i++)
    {
        res[index] = ARR[i];
        index++;
    }
    m = n1 + n2;
    printf("The new array after merging is\n");
    for (int i = 0; i < m; i++)
    {
        printf("ARR[%d]=%d\n", i, res[i]);
    }
    return 0;
}