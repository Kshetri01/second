#include <stdio.h>

void oddeven(int num);
void posneg(int num);
void fact(int num);
int main()
{
     int number;
    char choice;
    do
    {
        printf("A. Find odd or even\nB.Find positive or negative\nC.Find the factorial value\nD.Exit");
        printf("\n\n Enter your choice:");
        scanf(" %c", &choice);
        if (choice != 'D')
        {
            printf("enter a number: ");
            scanf(" %d", &number);
        }
        switch (choice)
        {
        case 'A':
            oddeven(number);
            break;
        case 'B':
            posneg(number);
            break;
        case 'C':
            fact(number);
            break;
        case 'D':
            printf("\n exiting program\n");
            break;
        }
    } while (choice != 'D');
    return 0;
}
void oddeven(int num)
{
    if (num % 2 == 0)
    {
        printf("\n%d is even\n", num);
    }
    else
        printf("\n%d is odd\n", num);
}
void posneg(int num)
{
    if (num > 0)
    {
        printf("\n%d is positive\n", num);
    }
    else if (num < 0)
    {
        printf("\n%d is negative\n", num);
    }
    else
        printf("\nzero\n");
}
void fact(int num)
{ int i=0;
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("\nfactorial of %d is %d\n", num, fact);
}