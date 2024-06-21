#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee{
char name[50];
char address[50];
int salary,age;
};
int main()
{
    int n,i,compare;
    printf("enter the no of employee");
    scanf("%d",&n);
    struct employee emp[n];
    printf("enter the name,address,salary and age of the employee");
    for(i=0;i<n;i++)
    {
        scanf("%s%s%d%d",emp[i].name,emp[i].address,&emp[i].salary,&emp[i].age);
    }
printf("\n\n name of thee employee");
for(i=0;i<n;i++)
{
    compare=strcmp(emp[i].address,"Kathmandu");
if(compare==0){
    if(emp[i].age>=40&&emp[i].age<=50){
printf("%s\n",emp[i].name);
}
}}
return 0;
}