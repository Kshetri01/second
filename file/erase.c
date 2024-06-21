#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("new.txt","r");
    int a,b;
    fscanf(fptr,"%d",&a);
    fscanf(fptr,"%d",&b);
    fclose(fptr);
    fptr=fopen("new.txt","w");
    fprintf(fptr,"%d",a+b);
    fclose(fptr);
return 0;
}