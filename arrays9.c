//TO INSERT A NUMBER AT GIVEN POSITION IN AN ARRAY
#include <stdio.h>
int main()
{
    int n, arr[50], num, pos, i;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Enter the numbers in the arrays\n");
    for (i = 0; i < n; i++)
    {
        printf("ARR[%d]=", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want to insert\n");
    scanf("%d", &num);
    printf("Enter at which position you want to insert the number\n");
    scanf("%d", &pos);
    for (i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
        arr[pos] = num;
        n++;
    }
    for (i = 0; i < n - 1; i++)
    {
        printf("The new array is %d\n", arr[i]);
    }
    return 0;
}