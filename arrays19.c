//PRODUCT SALES
#include <stdio.h>
int main()
{
    int arr[5][3], totalsales = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Salesman %d\n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the sale of product %d=", j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("*******************************\n");
    printf("The sales of the products are as :\n");
    for (int i = 0; i < 5; i++)
    {
        totalsales = 0;
        for (int j = 0; j < 3; j++)
        {
            totalsales = totalsales + arr[i][j];
        }
        printf("The total sales by salesman %d =%d\n ", i + 1, totalsales);
    }
    return 0;
}