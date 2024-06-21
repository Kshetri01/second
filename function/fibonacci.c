#include<stdio.h>
#include<conio.h>
int fibo(int a){
    if(a==1)
    {
        return 0;
    }
    if(a==2)
    {
        return 1;
    }
    return fibo(a-1)+fibo(a-2);
}
int main()
{int n;
    printf("enter the numbers");
    scanf("%d",&n);
    printf("%d",fibo(n));
return 0;
}