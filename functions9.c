//FIBONACCI SERIES
#include <stdio.h>
int Fibo(int a);
int main()
{
    int n, res;
    printf("Enter any number\n");
    scanf("%d", &n);
    printf("The fibonacci series is \n");
    for (int i = 0; i <= n; i++)
    {
        res = Fibo(i);
        printf("%d\t", res);
    }
    return 0;
}
int Fibo(int a)
{
    if (a == 0)
        return 0;
    else if (a == 1)
        return 1;
    else
        return Fibo(a - 1) + Fibo(a - 2);
}