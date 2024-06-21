#include<stdio.h>
#include<conio.h>
int multi(int a,int b){
    int product=a*b;
    return product;
}
int main()
{
    int x,y,c;
    printf("enter the two numbers");
    scanf("%d%d",&x,&y);
    c=multi(x,y);
    printf("the product is %d",c);
    
return 0;
}