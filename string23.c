// IMPLEMENTING QUIZ PROGRAM
#include <stdio.h>
#include <string.h>
int main()
{
    char quest[5][100];
    char option1[3][20], option2[3][20], option3[3][20], option4[3][20], option5[3][20];
    int response[5], correctans[5], option, i, marks;
    strcpy(quest[0], "Capital of India?\n");
    strcpy(option1[0], "Delhi\n");
    strcpy(option1[1], "Mumbai\n");
    strcpy(option1[2], "Chennai\n");
    correctans[0] = 0;
    strcpy(quest[1], "National Bird of India?\n");
    strcpy(option2[0], "Pigeon\n");
    strcpy(option2[1], "Peacock\n");
    strcpy(option2[2], "Crow\n");
    correctans[1] = 1;
    strcpy(quest[2], "Name the First Prime Minister of India.\n");
    strcpy(option3[0], "Narendra Modi\n");
    strcpy(option3[1], "Mahatama Gandhi\n");
    strcpy(option3[2], "Jawaharlal Nehru\n");
    correctans[2] = 2;
    strcpy(quest[3], "Name the First Female Presdient Of India.\n");
    strcpy(option4[0], "Sonia Gandhi\n");
    strcpy(option4[1], "Pratibha Patil\n");
    strcpy(option4[2], "Indira Gandhi\n");
    correctans[3] = 1;
    strcpy(quest[4], "Name the Youngest Prime Minister Of India\n");
    strcpy(option5[0], "Rahul Gandhi\n");
    strcpy(option5[1], "Rajiv Gandhi\n");
    strcpy(option5[2], "Narendra Modi\n");
    ;
    correctans[4] = 1;
    do
    {
        printf("*****QUIZ*****");
        printf("1.DISPLAY QUESTIONS\n");
        printf("2.DISPLAY CORRECT OPTION\n");
        printf("3.DIPLAY RESULT\n");
        printf("4.EXIT\n");
        printf("Enter your choice\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("%s", quest[0]);
            for (i = 0; i < 3; i++)
                printf("%s", option1[i]);
            printf("Enter your answer number:\n");
            scanf("%d", &response[0]);
            printf("%s", quest[1]);
            for (i = 0; i < 3; i++)
                printf("%s", option2[i]);
            printf("Enter your answer number:\n");
            scanf("%d", &response[1]);
            printf("%s", quest[2]);
            for (i = 0; i < 3; i++)
                printf("%s", option3[i]);
            printf("Enter your answer number:\n");
            scanf("%d", &response[2]);
            printf("%s", quest[3]);
            for (i = 0; i < 3; i++)
                printf("%s", option4[i]);
            printf("Enter your answer number:");
            scanf("%d", &response[3]);
            printf("%s", quest[4]);
            for (i = 0; i < 3; i++)
                printf("%s", option5[i]);
            printf("Enter your answer number:\n");
            scanf("%d", &response[4]);
            break;
        case 2:
            printf("CHECK THE CORRECT ANSWERS\n");
            printf("\n");
            printf("%s\n%s\n", quest[0], option1[correctans[0]]);
            printf("%s\n%s\n", quest[1], option1[correctans[1]]);
            printf("%s\n%s\n", quest[2], option1[correctans[2]]);
            printf("%s\n%s\n", quest[3], option1[correctans[3]]);
            printf("%s\n%s\n", quest[4], option1[correctans[4]]);
            break;
        case 3:
            marks = 0;
            for (i = 0; i <= 4; i++)
            {
                if (correctans[i] == response[i])
                    marks++;
            }
            printf("You got %d/5 marks\n", marks);
            break;
        }
    } while (option != 4);
    return 0;
}