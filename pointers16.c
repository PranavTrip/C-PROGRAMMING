//DISPLAY AN ARRAY  OF GIVEN NUMBERS
#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *ptr = arr;
    for (int i = 0; i < 9; i++)
    {
        printf("Array[%d]=%d\n", i, *ptr);
        *ptr++;
    }
    return 0;
}
