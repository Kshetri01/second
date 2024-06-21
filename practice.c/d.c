#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], c = 0, f;
    printf("enter the numbers");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the number to be find out in the list");
    scanf("%d", &f);
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == f)
        {
            c = c + 1;
        }
    }
    printf("the %d is repeated %d times", f, c);
    return 0;
}