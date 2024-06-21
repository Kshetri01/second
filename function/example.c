#include<stdio.h>
#include<conio.h>
void namaste()
{
printf("namaste");
}
void hello()
{
    printf("hello");
}
int main()
{
    char a;
    printf("enter the nationality");
    scanf("%c",&a);
    if(a=='n')
    {
        namaste();
    }
    else{
        hello();
    }
return 0;
}