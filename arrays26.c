//READING , DISPLAYING , ADDING , TRANSPOSING , MULTIPLYING TWO MATRICES USING FUNCTIONS
#include <stdio.h>
void readanddisplay(void);

void add(void);
void transpose(void);
void multiply(void);
int main()
{
    int mat[2][2], mat1[2][2];
    int choice;
    printf("1.For read and display\n2.For adding\n3.For transposing\n4.For multiplying\n5.Press 0 to exit\n");
    printf("Enter you choice:\n");
    scanf("%d", &choice);
    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            readanddisplay();
            break;
        case 2:
            add();
            break;
        case 3:
            transpose();
            break;
        case 4:
            multiply();
            break;
        default:
            printf("Please enter a valid choice\n");
            break;
        }
        printf("Enter your choice\n");
        scanf("%d", &choice);
    }
    return 0;
}
void readanddisplay(void)
{
    int arr[2][2];
    printf("Insert the elements of matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("MATRIX[%d][%d]=", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The matrix is\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("MATRIX[%d][%d]=%d\n", i, j, arr[i][j]);
        }
    }
}
void add(void)
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
}
void transpose(void)
{
    int mat[2][2], tmat[2][2];
    printf("Enter the elements of the matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("MATRIX[%d][%d]=", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            tmat[i][j] = mat[j][i];
        }
    }
    printf("The transposed matrix is \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("MATRIX[%d][%d]=%d\n", i, j, tmat[i][j]);
        }
    }
}
void multiply(void)
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
}