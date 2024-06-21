#include<stdio.h>
#include<conio.h>
void swap(int *a, int *b);
int main()
{ 
    int a,b;
    printf("Enter the numbers");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("a=%d and b=%d",a,b);
    
return 0;
}
void swap(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
}