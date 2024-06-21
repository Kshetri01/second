#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fptr;
    fptr= fopen("new.txt","w");
    fputc('S',fptr);
    fclose(fptr);
    
return 0;
} 