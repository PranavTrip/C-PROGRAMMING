//READING AND DISPLAYING A 2X2X2 ARRAY
#include <stdio.h>
int main()
{
    int arr[10][10][10], a, b, c;
    printf("Enter the values of A,B,C\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("Enter the elements of the array\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                printf("ARRAY[%d][%d][%d]=", i, j, k);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }
    printf("The array is \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                printf("ARRAY[%d][%d][%d]=%d\n", i, j, k, arr[i][j][k]);
            }
        }
    }
    return 0;
}