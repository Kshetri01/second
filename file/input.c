#include<stdio.h>
#include<conio.h>
int main()
{   
     FILE*fptr;
    fptr=fopen("new.txt","w+");
    char ch;
    printf("enter the character");
    fscanf(fptr,"%c",&ch);
    fclose(fptr);
return 0;
}