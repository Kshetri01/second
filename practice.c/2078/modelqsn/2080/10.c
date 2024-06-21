#include<stdio.h>
#include<conio.h>
int main()
{
 int i,sum=0,n=2;
 for(i=0;i<10;i++)
 {
    sum=sum+n;
    n=n+2;
 }
 printf("sum of even number is %d",sum);
return 0;
}