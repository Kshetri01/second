#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fptr;
fptr=fopen("odd.txt","w");
int n;
printf("enter the numbers upto which you want to print odd numbers");
scanf("%d",&n);
for(int i=1;i<n;i++)
{
if(i%2!=0)
{
fprintf(fptr, "%d\n",i);
}
}
fclose(fptr);
return 0;
}