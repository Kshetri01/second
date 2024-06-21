#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    float *ptr;
    ptr=(float *)malloc(5* sizeof(float));
    ptr[0]=5;
    ptr[1]=54;
    ptr[2]=34;
    ptr[3]=22;
    ptr[4]=45;
    for(int i=0;i<5;i++)
    {
        printf("%f\n",ptr[i]);
    }

return 0;
}