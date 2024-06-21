#include<stdio.h>
#include<conio.h>
int fibo(int n){
    if(n==1){
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int i,n;
    printf("enter the no of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
{
    printf("%d\t",fibo(i));
}
    
return 0;
}