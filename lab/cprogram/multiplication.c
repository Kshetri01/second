#include <stdio.h>
#include <conio.h>
int main()
{
    int a, i;
    printf("enter the number you want ");
    scanf("%d", &a);
    for (i = 1; i < 11; i++)
    {
        printf("%d * %d=%d\n", a, i, a * i);
    }
    return 0;
}