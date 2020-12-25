//FINDING LARGEST,SMALLEST OF N NUMBERS AND DISPLAYING THEIR POSITIONS USING ARRAYS AND POINTERS
#include <stdio.h>
int main()
{
    int n, arr[30], largest, pos = 0, smallest, pos1 = 0;
    int *pn = &n, *plargest = &largest, *psmallest = &smallest;
    int *ptr = arr;
    printf("Enter the value of n\n");
    scanf("%d", pn);
    printf("Enter the elements of the array\n");
    for (int i = 0; i < *pn; i++)
    {
        printf("ARRAY[%d]=", i);
        scanf("%d", ptr + i);
    }
    printf("The array is\n");
    for (int i = 0; i < *pn; i++)
    {
        printf("ARRAY[%d]=%d\n", i, *(ptr + i));
    }
    *plargest = *ptr;
    for (int i = 0; i < *pn; i++)
    {
        if (*(ptr + i) > *plargest)
        {
            *plargest = *(ptr + i);
            pos++;
        }
    }
    *psmallest = *ptr;
    for (int i = 0; i < *pn; i++)
    {
        if (*(ptr + i) < *psmallest)
        {
            *psmallest = *(ptr + i);
            pos1++;
        }
    }
    printf("The largest number is %d and is present at position %d\n", *plargest, pos);
    printf("The smallest number is %d and is present at position %d\n", *psmallest, pos1);
    return 0;
}