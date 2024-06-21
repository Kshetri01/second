#include<stdio.h>
#include<conio.h>
float convert(float celsius){
float far= celsius*(9.0/5.0)+32;
return far;
}
int main()
{ float f;
    printf("enter the tempr in farheneit");
    scanf("%f",&f);
    f=convert(f);
    printf("%f",f);
return 0;
}