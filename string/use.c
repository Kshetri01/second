#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char name[20], n, copy[20];

    printf("enter the string");
    scanf("%s", name);
    /*strlen*/
    n = strlen(name);
    printf("the length of string is %d\n", n);
    /*strcpy*/
    strcpy(copy, name);
    printf("copy of above is %s\n", copy);
    /*strupr*/
    strupr(copy);
    printf("%s\n", copy);
    /*strlwr*/
    strlwr(copy);
    printf("%s\n", copy);
    /*strcat*/
    strcat(copy, name);
    printf("%s\n", copy);

    /*
    strcmp*/
    if (strcmp(name, copy) > 0)
    {
        printf("same");
    }
    else
        printf("different");

    return 0;
}