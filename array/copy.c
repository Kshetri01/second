#include<stdio.h>
#include<conio.h>
int main()
{
    char name[100];
    char ch;
    int i=0;
    while(ch !='\n')
    {
        scanf("%c",&ch);
        name[i]=ch;
        i++;
    }
    name[i+1]='\0';
    puts(name);
return 0;
}