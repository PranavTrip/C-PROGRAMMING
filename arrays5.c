//ENTER 'N' NUMBERS AND FORM A DIGIT USING THOSE NUMBERS
#include <stdio.h>
int main()
{
    int n, arr[20], num = 0;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Enter the numbers\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the digits=");
        scanf("%d", &arr[i]);
        num = num * 10 + arr[i];
    }
    printf("The number formed using these digits is %d", num);
    return 0;
}