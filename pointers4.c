//COVERTING ANY FLOATING POINT NUMBER TO INTEGER
#include <stdio.h>
int main()
{
    double fnum, *pfnum = &fnum;
    int inum, *pinum = &inum;
    printf("Enter any floating point number\n");
    scanf("%lf", pfnum);
    *pinum = (int)*pfnum;
    printf("The floating point number %lf = %d", *pfnum, *pinum);
    return 0;
}