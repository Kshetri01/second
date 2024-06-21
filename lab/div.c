#include<stdio.h>
#include<conio.h>
int div(float a,float b){
    float product=a/b;
    return product;
}
int main()
{
    int x,y;
    printf("enter the two numbers");
    scanf("%d%d",&x,&y);
    float c=div(x,y);
    printf("the division is %f",c);
    
return 0;
}