#include<stdio.h>
#include<conio.h>
int sum(int n){
    if(n==1||n==0){
        return n;
    }
    return n+sum(n-1);

}
int main()
{int a;
     printf("enter the numbers");
scanf("%d",&a);
    printf("the sum of numbers is %d",sum(a));
return 0;
}