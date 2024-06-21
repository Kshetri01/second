#include<stdio.h>
#include<conio.h>
void subtract(int a,int b){
    int sub=a-b;
    printf("the answer is %d",sub);
}
int main()
{
    int a,b;
    printf("enter the numbers");
    scanf("%d%d",&a,&b);
    subtract(a,b);
return 0;
}