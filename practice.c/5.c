#include<stdio.h>
#include<conio.h>
int sum(int a,int b)
{
    return(a+b);
}
int main()
{
    int a,b,s;
    printf("enter the numbers");
    scanf("%d %d",&a,&b);
    s=sum(a,b);
    printf("the sum is %d",s);
    
return 0;
}