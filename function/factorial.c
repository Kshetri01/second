#include<stdio.h>
#include<conio.h>
int fact(int a){
  if(a==1||a==0){
    return 1;
  }  
  return fact(a-1)*a;
}
int main()
{ int a;
printf("enter the number");
scanf("%d",&a);
    printf("the factorial is %d",fact(a));
return 0;
}