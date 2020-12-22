//TO ENTER A NUMBER AND FIND THE SUM OF DIGITS
#include<stdio.h>
int main() {
int num,sum=0,temp;
printf("Enter the number\n");
scanf("%d",&num);
while(num!=0){
    temp=num%10;
    sum=sum+temp;
    num=num/10;
}
printf("The sum of the digits is %d",sum);
return 0;
}