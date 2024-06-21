#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],j,i,temp;
    printf("enter the numbers");
    for(i=0;i<10;i++){
scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("number in ascending order is:");
    for(i=0;i<10;i++){
        printf("%d\n",a[i]);
    }
}