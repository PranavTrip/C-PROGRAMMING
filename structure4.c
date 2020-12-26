//READ AND DISPLAY INFORMATION OF ALL STUDENTS IN A CLASS
#include <stdio.h>
typedef struct student
{
    char name[50], DOB[10];
    int roll_no;
} stu;
int main()
{
    int n;
    stu stud[50];
    printf("Enter the number of students\n");
    scanf("%d", &n);
    printf("Enter the details of students\n");
    for (int i = 0; i < n; i++)
    {
        printf("Student %d\n", i + 1);
        printf("\nEnter name: ");
        scanf("%s",&stud[i].name);
        printf("\nEnter roll number: ");
        scanf("%d", &stud[i].roll_no);
        printf("\nEnter DOB: ");
        scanf("%s",&stud[i].DOB);
    }
    printf("\n");
    printf("DETAILS OF STUDENTS\n");
    for (int i = 0; i < n; i++)
    {
        printf("Student %d\n", i + 1);
        printf("\nName: ");
        puts(stud[i].name);
        printf("\nRoll number: %d", stud[i].roll_no);
        printf("\nDOB: ");
        puts(stud[i].DOB);
    }
    return 0;
}