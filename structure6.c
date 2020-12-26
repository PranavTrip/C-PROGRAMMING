//READ,DISPLAY,ADD,SUBTRACT TWO TIME VARIABLES
#include <stdio.h>
void read();
void add();
void sub();
typedef struct time
{
    int hr, min, sec;
    int hr1, min1, sec1;
} time;
int main()
{
    int choice;
    printf("Enter your choice\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        read();
        break;
    case 2:
        add();
        break;
    case 3:
        sub();
        break;
    deafult:
        printf("Enter valid choice\n");
        break;
    }

    return 0;
}
void read()
{
    time tim;
    printf("Enter the time 1 in hours,minutes and seconds: \n");
    scanf("%d%d%d", &tim.hr, &tim.min, &tim.sec);
    printf("Enter the time 2 in hours,minutes and seconds: \n");
    scanf("%d%d%d", &tim.hr1, &tim.min1, &tim.sec1);
    printf("Time 1 is : %dH %dMIN %dSEC", tim.hr, tim.min, tim.sec);
    printf("Time 2 is : %dH %dMIN %dSEC", tim.hr1, tim.min1, tim.sec1);
}

void add()
{
    time tim;
    int sum1, sum2, sum3;
    printf("Enter the time 1 in hours,minutes and seconds: \n");
    scanf("%d%d%d", &tim.hr, &tim.min, &tim.sec);
    printf("Enter the time 2 in hours,minutes and seconds: \n");
    scanf("%d%d%d", &tim.hr1, &tim.min1, &tim.sec1);
    sum1 = tim.hr + tim.hr1;
    sum2 = tim.min + tim.min1;
    sum3 = tim.sec + tim.sec1;
    printf("The sum of time is %dH %dMIN %dSEC", sum1, sum2, sum3);
}
void sub()
{
    time tim;
    int diff1, diff2, diff3;
    printf("Enter the time 1 in hours,minutes and seconds: \n");
    scanf("%d%d%d", &tim.hr, &tim.min, &tim.sec);
    printf("Enter the time 2 in hours,minutes and seconds: \n");
    scanf("%d%d%d", &tim.hr1, &tim.min1, &tim.sec1);
    diff1 = tim.hr - tim.hr1;
    diff2 = tim.min - tim.min1;
    diff3 = tim.sec - tim.sec1;
    printf("The subtraction of time is %dH %dMIN %dSEC", diff1, diff2, diff3);
}