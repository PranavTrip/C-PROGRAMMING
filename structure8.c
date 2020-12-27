//READ,DISPLAY,ADD,SUBTRACT TWO HEIGHTS
#include <stdio.h>
typedef struct height
{
    int feet, inch;
} height;

height add(height *h1, height *h2);
height sub(height *h1, height *h2);
int main()
{
    height h1, h2, h3, h4;
    printf("Enter the first height\n");
    scanf("%d%d", &h1.feet, &h1.inch);
    printf("Enter the second height\n");
    scanf("%d%d", &h2.feet, &h2.inch);
    printf("\n");
    printf("The entered heights are\n");
    printf("Height 1: %dfeet %dinches\n", h1.feet, h1.inch);
    printf("Height 2: %dfeet %dinches\n", h2.feet, h2.inch);
    h3 = add(&h1, &h2);
    h4 = sub(&h1, &h2);
    printf("The addition of these heights is %dfeet and %dinch\n", h3.feet, h3.inch);
    printf("The diffrence of these heights is %dfeet and %dinch\n", h4.feet, h4.inch);
    return 0;
}
height add(height *h1, height *h2)
{
    height sum;
    sum.inch = h1->inch + h2->inch;
    while (sum.inch > 12)
    {
        sum.inch = sum.inch - 12;
        sum.feet++;
    }
    sum.feet = h1->feet + h2->feet;
    return sum;
}
height sub(height *h1, height *h2)
{
    height diff;
    if (h1->feet > h2->feet)
    {
        if (h1->inch < h2->inch)
        {
            h1->inch = h1->inch - 12;
            h1->feet--;
        }
        diff.inch = h1->inch - h2->inch;
        diff.feet = h1->feet - h2->feet;
    }
    else
    {
        if (h1->inch < h2->inch)
        {
            h2->inch = h2->inch + 12;
            h2->feet--;
        }
        diff.inch = h2->inch - h1->inch;
        diff.feet = h2->feet - h1->feet;
    }
    return diff;
}
