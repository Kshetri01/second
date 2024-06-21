#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int *p,n;
    printf("enter the storage");
    scanf("%d",&n);
    p=(int *) calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d\n",p+i);
    }
    free(p);
p=(int *) calloc(n,sizeof(int));
for (int i = 0; i < n; i++)
    {
        printf("%d\n",p[i]);
    }

    
return 0;
}