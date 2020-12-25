//BIGGEST OF 3 NUMBERS
#include <stdio.h>
int main()
{
    int a, b, c;
    int *pa = &a, *pb = &b, *pc = &c;
    printf("Enter the three numbers\n");
    scanf("%d%d%d", pa, pb, pc);
    if (*pa > *pb && *pa > *pc)
    {
        printf("%d is the biggest of three numbers\n", *pa);
    }
    else if (*pa<*pb && * pb> * pc)
    {
        printf("%d is the biggest of three numbers\n", *pb);
    }
    else
    {
        printf("%d is the biggest of three numbers\n", *pc);
    }

    return 0;
}