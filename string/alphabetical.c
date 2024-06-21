#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char name[10][100], temp[100];
    int i, j;
    printf("enter the name");
    for (i = 0; i < 3; i++)
    {
        scanf("%s", name[i]);
    }
    printf("name in alphabetical order is\n");
    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
        printf("names=%s\n", name[i]);
    }

    return 0;
}