//READ AND DISPLAY A 3X3 MATRIX
#include <stdio.h>
int main()
{
    int arr[3][3];
    printf("Insert the elements of matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("MATRIX[%d][%d]=", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The matrix is\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("MATRIX[%d][%d]=%d\n", i, j, arr[i][j]);
        }
    }
    return 0;
}