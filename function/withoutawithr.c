#include<stdio.h>
#include<conio.h>
int input()
{
int i;
printf("enter the numbers");
scanf("%d",&i);
return i;
}
int main()
{
    int a;
    a=input();
    printf("entered number is %d",a);
    
return 0;
}