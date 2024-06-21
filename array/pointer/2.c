#include<stdio.h>
#include<conio.h>
void cmp(int a,int b){
    if(a>b)
    {
        printf("%d is greatest",a);
    }
    else
    printf("%d is greatest",b);
}
int main()
{
    int a,b;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    cmp(a,b);
    
return 0;
}