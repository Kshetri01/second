#include<stdio.h>
#include<conio.h>
int main()
{
    int a,fact=1;
    printf("enter the number");
    scanf("%d",&a);
    for (int i = 1; i <= a; i++)
    {
        fact=fact*i;
    }
 printf("factorial is %d ",fact);   
return 0;
}