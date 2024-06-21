#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,x,y;
    printf("enter the numbers");
    scanf("%d%d",&x,&y);
    printf("Number before swap is a=%d and b=%d\n",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("after swap a=%d and b=%d",x,y);
return 0;
}