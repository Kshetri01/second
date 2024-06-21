#include<stdio.h>
#include<conio.h>
struct student{
    char name[30];
    int rollno;
    float marks;
    char remarks[30];
}s[5];
int main()
{
 int i;
 for ( i = 0; i < 5; i++)
 {
 printf("enter the name, roll no, marks and remarks of student\n");
 scanf("%s%d%f%s",s[i].name,&s[i].rollno,&s[i].marks,s[i].remarks);