#include<stdio.h>
#include<conio.h>
int countlength(char arr[]){
    int count=0;
    for(int i=0;arr[i]!=0;i++)
    {
        count++;
    }
    return count-1;
}
int main()
{
    char name[100];
    fgets(name,100,stdin);
    printf("length is %d",countlenght(name));
    
return 0;
}