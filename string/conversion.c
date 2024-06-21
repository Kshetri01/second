#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i;
    char string[50];
    printf("enter the string");
    scanf("%s",string);
    for(i=0;i<strlen(string);i++)
    {
        if(string[i]>97)
        {
            string[i]=string[i]-32;
        }
        else
        string[i]=string[i]+32;


    }
    printf("%s",string);
return 0;
}