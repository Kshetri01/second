#include <stdio.h>
#include <conio.h>
void input()
{
    int a, b, c;
    printf("enter the numbers");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("sum is %d",c);
}
int main()
{

 input();

    return 0;
}