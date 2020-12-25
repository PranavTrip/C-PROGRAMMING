//READING AND DISPLAYING ARRAY OF N INTEGERS USING POINTERS
#include <stdio.h>
int main()
{
    int n, arr[10], *pn = &n;
    int *ptr = arr;
    printf("Enter the value of n\n");
    scanf("%d", pn);
    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        printf("ARRAY[%d]=", i);
        scanf("%d", ptr + i);
    }
    printf("The Array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("ARRAY[%d]=%d\n", i, *(ptr + i));
    }
    return 0;
}