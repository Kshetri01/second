#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d;
    float avg;
    printf("enter the marks of 4 students");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    avg=(float)(a+b+c+d)/4;
    printf("average is %f",avg);

return 0;
}