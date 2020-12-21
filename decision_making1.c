// TO DETERMINE WHETHER A PERSON IS ELIGIBLE TO VOTE
#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age of the person\n");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("The person is eligible to vote\n");
    }
    else
    {
        printf("The person is not eligible to vote\nThe person is minor.");
    }
    return 0;
}