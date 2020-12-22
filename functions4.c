//CONVERTING TIME TO MINUTES
#include <stdio.h>
int convert(int hrs, int mins);
int main()
{
    int hours, min, minutes;
    printf("Enter time in hours and minutes\n");
    scanf("%d%d", &hours, &min);
    minutes = convert(hours, min);
    printf("%d hours converted in minutes is %d", hours, minutes);
    return 0;
}
int convert(int hrs, int mins)
{
    mins = hrs * 60 + mins;
    return mins;
}