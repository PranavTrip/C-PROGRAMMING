// INSERT A NUMBER IN A SORTED LIST USING ARRAY
#include <stdio.h>
int main()
{
    int n, arr[10], pos, num;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Enter the numbers in the array\n");
    for (int i = 0; i < n; i++)
    {
        printf("ARR[%d]=", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want to insert\n");
    scanf("%d", &num);
    printf("Enter the position at which you want to insert the number\n");
    scanf("%d", &pos);
    for (int i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = num;
    n++;
    printf("The new array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}