#include <stdio.h>
#include <conio.h>
int sum(int n)
{
    int total = 0;
    while (n != 0)
    {
        int rem = n % 10;
        n = n / 10;
        total = total + rem;
    }
    return total;
}
int main()
{
    int a;
    printf("enter the numbers ");
    scanf("%d", &a);
    a = sum(a);
    printf("sum is %d", a);
    return 0;
}