//WEEKDAY OF A CORRESPONDING NUMBER
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number between 1 to 7\n");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("MONDAY");
        break;
    case 2:
        printf("TUESDAY");
        break;
    case 3:
        printf("WEDNESDAY");
        break;
    case 4:
        printf("THURSDAY");
        break;
    case 5:
        printf("FRIDAY");
        break;
    case 6:
        printf("SATURDAY");
        break;
    case 7:
        printf("SUNDAY");
        break;
    deafult:
        printf("Please enter a valid number");
        break;
    }
    return 0;
}