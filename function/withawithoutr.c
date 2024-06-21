#include<stdio.h>
#include<conio.h>
void star(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c",'*');
    }
    
}
int main()
{
    int n;
printf("enter the no of stars to be printed");
scanf("%d",&n);
    star(n);
return 0;
}