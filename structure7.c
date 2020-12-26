// INITIALIZING THE MEMBERS OF THE STRUCTURES AND USERS
#include <stdio.h>
#include <string.h>
typedef struct structure
{
    int roll_no;
    char name[50], DOB[20];
} stu;
int main()
{
    stu stud1, stud2, *pstud1 = &stud1, *pstud2 = &stud2;
    pstud1->roll_no = 10;
    strcpy(pstud1->name, "AYUSH CHUTIYA");
    strcpy(pstud1->DOB, "11/03/2003");
    pstud2->roll_no = 19;
    strcpy(pstud2->name, "PRANAV OP");
    strcpy(pstud2->DOB, "08/05/2002");
    printf("\n");
    printf("Students Details\n");
    printf("Student 1\n");
    printf("Name=%s\nDOB=%s\nRoll number=%d\n", pstud1->name, pstud1->DOB, pstud1->roll_no);
    printf("Student 2\n");
    printf("Name=%s\nDOB=%s\nRoll number=%d\n", pstud2->name, pstud2->DOB, pstud2->roll_no);
    return 0;
}