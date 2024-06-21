#include <stdio.h>
#include <conio.h>
int prime(int i, int n)
{
    if (i == n)
        return 1;
    else
    {
        if (n % i == 0)
            return 0;
        else
            return prime(i + 1, n);
    }
}
int main()
{
    int n, c, i = 2;
    printf("enter the num");
    scanf("%d", &n);
    c = prime(i, n);
    if (c == 1)
    {
        printf("prime");
    }
    else
        printf("not prime ");
    return 0;
}