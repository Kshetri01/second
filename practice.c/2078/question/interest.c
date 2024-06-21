#include<stdio.h>
#include<conio.h>
int main()
{
 int costs=2000;
 int sp=2200;
 int month=21;  
 float interest=((sp-costs)/2000.0);
 float total= (interest*100);
 float monthly_inter= total/12.0;

 printf("the yearly interest is %f",total);
 printf("\nmonthly interest is %f",monthly_inter); 
return 0;
}