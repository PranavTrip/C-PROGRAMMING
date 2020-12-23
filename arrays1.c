//TO READ AND DISPLAY 'N' RANDOM NUMBERS USING ARRAY
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[50], Randno, n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        Randno = rand() % 50; //THIS FUNCTION GENERATES RANDOM NUMBER IN C
        arr[i] = Randno;
        printf("Arr[%d]=%d\n", i, arr[i]);
    }
    return 0;
}