#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int *a,i,n,sum=0;
    printf("enter the terms");
    scanf("%d",&n);
    a=(int*) malloc(n*sizeof(int));
    printf("enter the numbers\n");
    for(i=0;i<n;i++)
    {
       scanf("%d",(a+i)); 
    }
for(i=0;i<n;i++){
    sum=sum+*(a+i);
}
printf("sum is %d",sum);
return 0;
}