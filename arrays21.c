//READING MARKS OF 5 STUDENTS AND DISPLAYING HIGHEST MARKS
#include <stdio.h>
int main()
{
    int class[5][3], highestmarks;
    for (int i = 0; i < 5; i++)
    {
        printf("STUDENT %d\n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            printf("marks in subject %d=", j + 1);
            scanf("%d", &class[i][j]);
        }
    }
    for (int j = 0; j < 3; j++)
    {
        highestmarks = class[0][j];
        for (int i = 0; i < 5; i++)
        {
            if (class[i][j] > highestmarks)
                highestmarks = class[i][j];
        }
        printf("Highest marks in subject %d is %d\n", j + 1, highestmarks);
    }

    return 0;
}