//READ THE NUMBERS UNTIL -1 IS ENCOUNTERED AND COUNT POSITIVE,NEGATIVE NUMBERS
#include <stdio.h>
int main()
{
    int pos = 0, neg = 0, zer = 0, num;
    printf("Enter any number except -1\n");
    scanf("%d", &num);
    while (num != -1)
    {
        if (num > 0)
        {
            pos++;
        }
        else if (num < 0)
        {
            neg++;
        }
        else
        {
            zer++;
        }
        printf("Enter any number except -1\n");
        scanf("%d", &num);
    }
    printf("The count of positive numbers is %d\n", pos);
    printf("The count of negative numbers is %d\n", neg);
    printf("The count of zeroes is %d\n", zer);
    return 0;
}