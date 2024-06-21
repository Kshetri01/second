#include<stdio.h>
int main()
{
    char a[5]={'N','E','P','A','L'};
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<=8;j++)
        {
            if(j>=4-i && j<=4+i)
                {
                    printf("%c",a[i]);
                }
                else
                {
                    printf(" ");
                }
        }

            printf("\n");
    }
    return 0;
}