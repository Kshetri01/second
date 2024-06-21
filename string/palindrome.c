#include <stdio.h>
#include <conio.h>
#include<string.h>
int main()
{
    int c;
    char a[20], n, temp[20];
    printf("enter the string");
    scanf("%s", a);
    strcpy(temp, a);
    c = strcmp(a, strrev(temp));
    if (c == 0)
    {
        printf("palindrome");
    }
    else
        printf("not pallindrome");

    return 0;
}