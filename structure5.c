//READ,DISPLAY,ADD,SUBTRACT DISTANCES USING STRUCTURES AND FUNCTIONS
#include <stdio.h>
void read();
void display();
void add();
void sub();
struct distance
{
    int km, met, km1, met1;
};
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
        display();
        break;
    case 3:
        add();
        break;
    case 4:
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
    struct distance dist;
    printf("Enter the distance 1 in kms and metres: \n");
    scanf("%d%d", &dist.km, &dist.met);
    printf("Enter the distance 2 in kms and metres: \n");
    scanf("%d%d", &dist.km1, &dist.met1);
}
void display()
{
    struct distance dist;
    printf("Distance 1 is : %d km %d m\n", dist.km, dist.met);
    printf("Distance 2 is : %d km %d m\n", dist.km1, dist.met1);
}
void add()
{
    struct distance dist;
    int sum1, sum2;
    printf("Enter the distance 1 in kms and metres: \n");
    scanf("%d%d", &dist.km, &dist.met);
    printf("Enter the distance 2 in kms and metres: \n");
    scanf("%d%d", &dist.km1, &dist.met1);
    sum1 = dist.km + dist.km1;
    sum2 = dist.met + dist.met1;
    printf("The sum of the distances is %dkm %dm", sum1, sum2);
}
void sub()
{
    struct distance dist;
    int diff1, diff2;
    printf("Enter the distance 1 in kms and metres: \n");
    scanf("%d%d", &dist.km, &dist.met);
    printf("Enter the distance 2 in kms and metres: \n");
    scanf("%d%d", &dist.km1, &dist.met1);
    diff1 = dist.km - dist.km1;
    diff2 = dist.met - dist.met1;
    printf("The difference of these distances is %dkm %dm", diff1, diff2);
}