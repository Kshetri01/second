#include<stdio.h>
#include<conio.h>
float percentage(float a,float b,float c){
float marks=(((a+b+c)/300.0)*100);
return marks;
}
int main()
{int x,y,z;
    printf("enter the marks of students in math science and english");
    scanf("%d%d%d",&x,&y,&z);
    float per= percentage(x,y,z);
    printf("the percentage is %f",per);
return 0;
}