#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("enter the number: ");
    scanf("%d", &a);
    int *n = &a;
    printf("ptr is:%d", n);
    n++; /*n=n+1 , the 1 indicatee the size of variable
     In this case it is integer type so value increase by 4 byte*/
    printf("ptr is %d", n);
    return 0;
}