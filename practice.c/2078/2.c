#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][3],b[3][3],i,j,c=1;
    printf("enter the element of first matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("enter the element of second matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]!=b[i][j])
            {
                c=0;
                break;
            }
        }
    }
    if(c==1){
        printf("identical matrix");
    }
    else
    printf(" not identical matrix");
return 0;
}