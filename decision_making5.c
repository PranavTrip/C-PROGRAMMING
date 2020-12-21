//TO DETERMINE WHETHER THE ENTERED CHARACTER IS A VOWEL OR A CONSONANT
#include <stdio.h>
int main()
{
    char input;
    printf("Enter the character\n");
    scanf("%c", &input);
    if (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u' || input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U')
    {
        printf("The entered character is a vowel\n");
    }
    else
    {
        printf("The entered character is a consonant\n");
    }
    return 0;
}