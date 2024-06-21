#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, k, a[10][10], b[10][10], c[10][10], s = 0, x, y, m, n;
    printf("enter the row and column of first matrix");
    scanf("%d %d ", &x, &y);
    printf("enter the row and column of second matrix");
    scanf("%d %d", &m, &n);
    if (y == m)
    {
        printf("enter the first matrixs");
        
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("enter the second matrixs");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < n; j++)
            {
                s = 0;
                for (k = 0; k < m; k++)
                {
                    s = s + a[i][k] * b[k][j];
                }
                c[i][j] = s;
            }
        }
        printf("multiplied matrix is \n");
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d", c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("matrix multiplication is not possible \n");
    }
    return 0;
}