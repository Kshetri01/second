#include<stdio.h>
#include<conio.h>
void slice(char word[],int n,int m)
{
    char new[200];
    int j=0;
for(int i=n;i<=m;i++,j++){
new[j]=word[i];
}new[j]='\0';
puts(new);
}
int main()
{
    char name[100]="ManjilChhetri";
    slice(name,4,8);
    
return 0;
}