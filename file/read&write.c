/* program to read from one file and write to another file */

#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *ptr,*fptr;
ptr=fopen("faf.txt","r");
fptr=fopen("man.txt","w");
char str[100];
while(fgets(str,50,ptr)!= NULL)
{
fputs(str,fptr);
};
fclose(ptr);
fclose(fptr);
return 0;
}