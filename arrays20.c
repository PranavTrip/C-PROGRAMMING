//HANDLING MARKS OF 10 STUDENTS
#include <stdio.h>
int main()
{
    int class[10][3], marks, totalmarks[10] = {0}, i;
    double avg[10];
    for (int i = 0; i < 10; i++)
    {
        printf("STUDENT %d\n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            printf("marks in subject %d=", j + 1);
            scanf("%d", &class[i][j]);
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("The total marks of student %d =", i + 1);
        for (int j = 0; j < 3; j++)
        {
            totalmarks[i] = totalmarks[i] + class[i][j];
        }
        printf("%d\n", totalmarks[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
            avg[i] = totalmarks[i] / 3;
        printf("The average marks of the student %d is %lf\n", i + 1, avg[i]);
    }

    return 0;
}