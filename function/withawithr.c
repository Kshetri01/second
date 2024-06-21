#include<stdio.h>
#include<conio.h>
int sum(int a , int b)
{
    return a+b;
}
int main()
{
    int a,b,c;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("the sum is %d",c);
return 0;
}