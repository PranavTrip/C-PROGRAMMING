//READ,DISPLAY,ADD AND SUBTRACT TWO COMPLEX NUMBERS
#include <stdio.h>
struct complex
{
    int real, imaginary;
    int real1, imaginary1;
    int rsum, isum;
    int rdiff, idiff;
};
int main()
{
    struct complex num;
    printf("Enter the real part and imaginary part of number 1\n");
    scanf("%d%d", &num.real, &num.imaginary);
    printf("Enter the real part and imaginary parts of  numbers 2\n");
    scanf("%d%d", &num.real1, &num.imaginary1);
    printf("\n");
    printf("The two complex numbers are:\n");
    printf("Number 1=%d+%di\n", num.real, num.imaginary);
    printf("Number 2=%d+%di\n", num.real1, num.imaginary1);
    num.rsum = num.real + num.real1;
    num.isum = num.imaginary + num.imaginary1;
    printf("The addition of the above complex numbers is %d+%di\n", num.rsum, num.isum);
    num.rdiff = num.real - num.real1;
    num.idiff = num.imaginary - num.imaginary1;
    printf("The subtraction of the above complex numbers is (%d)+(%d)i\n", num.rdiff, num.idiff);
    return 0;
}