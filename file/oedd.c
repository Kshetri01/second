#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp,*fp1;
    fp=fopen("new.txt","r");
    fp1=fopen("odd1.txt","w");
    int a[10];
    for(int i=0;a[i]!=EOF;i++)
    {
        fscanf(fp,"%d",&a[i]);
    }
for(int i=0;a[i]!=EOF;i++)
    {
     if(a[i]%2==0)
     {
        fprintf(fp1,"%d",a[i]);
     }
    }

return 0;
}