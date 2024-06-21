#include<stdio.h>
#include<conio.h>
void hot(){
    printf("it's hot");
}
void cold(){
    printf("it's cold");
}
int main()
{ float a;
    printf("enter the temperature");
    scanf("%f",&a);
    if(a<50 && a>0)
    {
        cold();
    }
    if(a>50&&a<100)
    {
hot();
    }
return 0;
}