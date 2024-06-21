#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5];
    int *p=a;
for(int i=0;i<5;i++)
{
    printf("%d index:",i);
    scanf("%d",(p+i));
}    
for(int i=0;i<5;i++)
{
printf("%d index=%d\n",i,*(p+i));
}
return 0;
}