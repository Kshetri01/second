#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fptr;
fptr=fopen("you.txt","r");
char ch;
while(ch!=EOF){
    printf("%c",ch);
    ch=fgetc(fptr);
}
fclose(fptr);
return 0;
}