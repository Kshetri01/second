#include <stdio.h>
#include <conio.h>
int main()
{
    int a[3][3], i, j, l;
    printf("enter the matrix");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    l = a[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (l < a[i][j])
            {
                l = a[i][j];
            }
        }
    }
    printf("largest is %d",l);
    return 0;
}