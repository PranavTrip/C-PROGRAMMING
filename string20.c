//READ A TEXT HAVING MULTIPLE LINES AND DISPLAYING N LINES FROM MTH POSITION
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], res[100];
    int i = 0, n, m, lcount = 0, j;
    printf("Enter '*' to enter\n");
    printf("Enter the number of lines that are to be copied\n");
    scanf("%d", &n);
    printf("Enter the position from where copying has to start\n");
    scanf("%d", &m);
    printf("Enter the text\n");
    scanf("%c", &str[i]);
    while (str[i] != '*')
    {
        i++;
        scanf("%c", &str[i]);
    }
    str[i] = '\0';
    i = 0;
    while (str[i] != '\0')
    {
        if (lcount == m)
        {
            j = i;
            while (n > 0)
            {
                printf("%c", str[j]);
                j++;
                if (str[j] == '\n')
                {
                    n--;
                    lcount++;
                    printf("%d \t", lcount);
                }
            }
        }
        else
        {
            i++;
            if (str[i] == '\n')
                lcount++;
        }
    }
    return 0;
}