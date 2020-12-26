//READ AND DISPLAY INFORMATION OF A STUDENT
#include <stdio.h>
struct student
{
    char name[100];
    int class;
    int roll_no;
    char DOB[100];
};
int main()
{
    struct student stud1;
    printf("Enter the name of the student\n");
    scanf("%s",stud1.name);
    printf("Enter the class of student\n");
    scanf("%d", &stud1.class);
    printf("Enter the roll number of student\n");
    scanf("%d", &stud1.roll_no);
    printf("Enter the DOB of the student\n");
    scanf("%s",stud1.DOB);
    printf("\n");
    printf("Details of the student:\n");
    printf("The name of the student is %s\n",stud1.name);
    printf("The class of the student is %d\n", stud1.class);
    printf("The roll number of the student is %d \n", stud1.roll_no);
    printf("The DOB of student is %s \n",stud1.DOB);
    return 0;
}