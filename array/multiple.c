#include<stdio.h>
#include<conio.h> 
void storetable(int arr[][10],int n,int m,int number){
    for(int i=0;i<m;i++)
    {
        arr[n][i]=number*(i+1);
    }
}
int main()
{
int table[2][10];
storetable(table,0,10,3);
storetable(table,1,20,5);
for(int i=0;i<10;i++){
    printf("%d\t",table[0][i]);
}
printf("\n");
for(int i=0;i<10;i++){
    printf("%d\t",table[1][i]);
}
return 0;
}