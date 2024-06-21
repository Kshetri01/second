#include <stdio.h>
#include <conio.h>
int hcf(int a, int b)
{
   if(b==0)
   return a;
    else
    {
        return hcf(b, a % b);
    }
}
int main()
{
    int a, b, lcm, h;
    printf("enter the two numbers");
    scanf("%d %d", &a, &b);
    h = hcf(a, b);
    lcm = (a * b) / h;
    printf("HCF is %d", h);
    printf("LCM is %d", lcm);

    return 0;
} 