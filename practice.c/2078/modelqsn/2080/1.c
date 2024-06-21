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
int prime(int b)
{ 
    int c=0;
    for(int i=2;i<b;i++)
    {
        if(b%i==0)
        {
            c=c+1;
        }
    }
    return c;
    
}
int main()
{int n,c,p;
    printf("enter the numbers");
    scanf("%d",&n);
    c=fibo(n);
    printf("nth fibo number is %d\n",c);
    p=prime(c);
    if(p==0){
        printf("%d is prime",c);
    }
    else
    printf("\n%d is not prime",c);
return 0;
}