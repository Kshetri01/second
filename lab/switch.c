#include<stdio.h>
#include<conio.h>
int sum(int a,int b);
int sub(int a,int b);
int multi(int a,int b);
int div(int a,int b);

int main()
{int a,b,s;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    printf("enter 1 for add, 2 for subtract,3 for multi,4 for division ");
    scanf("%d",&s);
    switch(s)
    {
case 1:
sum(a,b);
break;
    
case 2:
sub(a,b);
break;
case 3:
multi(a,b);
break;
case 4:
div(a,b);
break;
    }
    return 0;
}
   int sum(a,b)
    {
       int t=a+b;
        printf("%d",t);
    }
     int sub(a,b)
     {
        int t=a-b;
        printf("%d",t);}
 int multi(a,b){
        int t=a*b;
        printf("%d",t);
        }

       int div(a,b){
        int t=a/b;
        printf("%d",t);}