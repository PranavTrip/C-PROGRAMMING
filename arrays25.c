//MULTIPLYING TWO 2X2 MATRICES AND STROING THEM IN A THIRD MATRIX
#include <stdio.h>
int main()
{
    int arr1[2][2], arr2[2][2], arr3[2][2];
    printf("Enter the elements of the matrices\n");
    printf("Matrix 1\n");
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
        int j = 0;
        for (int j = 0; j < 2; j++)
        {
            arr3[i][j] = 0;
            for (int k = 0; k < 2; k++)
                arr3[i][j] = arr3[i][j] + (arr1[i][k] * arr2[k][j]);
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