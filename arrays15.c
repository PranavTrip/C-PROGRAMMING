//PROGRAM TO WRITE AND READ AN ARRAY USING FUNCTIONS
#include <stdio.h>
void array_read(int arr[], int a);
void array_dis(int arr[], int a);
int main()
{
    int Arr[20], n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    array_read(Arr, n);
    printf("The array is\n");
    array_dis(Arr, n);
}
void array_read(int arr[], int a)
{
    for (int i = 0; i < a; i++)
    {
        printf("Arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
}
void array_dis(int arr[], int a)
{
    for (int i = 0; i < a; i++)
    {
        printf("Arr[%d]=%d\n", i, arr[i]);
    }
}