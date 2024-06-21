#include<stdio.h>
#include<conio.h>
int fibo(int n)
{
    if(n==1)
    {
        return 0;
    }
    if(n==2){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}
int main()
{int n;
    printf("enter the number");
    scanf("%d",&n);
    printf("%d term is %d",n,fibo(n));
return 0;
}