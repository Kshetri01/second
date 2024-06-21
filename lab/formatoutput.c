#include<stdio.h>
#include<conio.h>
int main()
{
    char a[59];
    printf("enter a line");
    scanf("%[^\n]",a);
    printf("\n%s",a);
    printf("\n%8s",a);
    printf("\n%-13.9s",a);
    printf("\n%13.9s",a);
return 0;
}