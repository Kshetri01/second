#include<stdio.h>
#include<conio.h>
#include<math.h>
float root(float n){
    return sqrt(n);
}
int main()
{
    float a;
    printf("enter the numbers");
    scanf("%f",&a);
float c=root(a);
printf("square root is %.2f",c);
return 0;
}