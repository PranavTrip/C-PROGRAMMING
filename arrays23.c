//TRANSPOSE OF A 3X3 MATRIX
#include <stdio.h>
int main()
{
    int mat[3][3], tmat[3][3];
    printf("Enter the elements of the matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("MATRIX[%d][%d]=", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            tmat[i][j] = mat[j][i];
        }
    }
    printf("The transposed matrix is \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("MATRIX[%d][%d]=%d\n", i, j, tmat[i][j]);
        }
    }
    return 0;
}