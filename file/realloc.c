#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p=(int *) calloc(5,sizeof(int));
printf("enter the numbers");
for(int i=0;i<5;i++)
{
    scanf("%d",&p[i]);
}
p=realloc(p,8);
printf("enter the numbers");
for(int i=0;i<8;i++)
{
    scanf("%d",&p[i]);
}
for(int i=0;i<8;i++)
{
    printf("number %d is %d\n",i,p[i]);
}
return 0;
}