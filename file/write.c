#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fptr;
    fptr= fopen("new.txt","r");
    printf("%c",fgetc(fptr));
    fclose(fptr);
    
return 0;
}