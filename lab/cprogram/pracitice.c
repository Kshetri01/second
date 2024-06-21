#include<stdio.h>
#include<conio.h>
int main()
{
    int n,kilo,a,b;

    printf("enter the mass in gram");
    scanf("%d",&n);
printf("mass in kg is:");
a=n/1000;
b=n%1000;
printf("%d.%dkg",a,b);

    
return 0;
}