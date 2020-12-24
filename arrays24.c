//ADDING THE ELEMENTS OF TWO 2X2 MATRIX AND STORING THEM IN A THIRD MATRIX
#include <stdio.h>
int main()
{
    int arr1[2][2], arr2[2][2], arr3[2][2];
    printf("Matrix 1\n");
    printf("Enter the elements in the matrices\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("MATRIX[%d][%d]=", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Matrix 2\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("MATRIX[%d][%d]=", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("The new matrix is \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("MATRIX[%d][%d]=%d\n", i, j, arr3[i][j]);
        }
    }
    return 0;
}