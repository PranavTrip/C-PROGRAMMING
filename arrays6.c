//PROGRAM TO CHECK IF THERE IS ANY DUPLICATE NUMBER IN THE ARRAY
#include <stdio.h>
int main()
{
    int n, arr[50], dup;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Enter the values in the array\n");
    for (int i = 0; i < n; i++)
    {
        printf("Arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                printf("There is a duplicate number in the array\n");
                break;
            }
            if (arr[i] != arr[j])
            {
                printf("There is no duplicate number in the array\n");
                break;
            }
        }
    }
    return 0;
}