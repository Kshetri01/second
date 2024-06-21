#include <stdio.h>
int main()
{
    int p, q, i, j, largest;
    printf("enter the no of row");
    scanf("%d", &p);
    printf("enter the no of column");
    scanf("%d",&q);
    int a[p][q];
    printf("enter the elements: ");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < p; i++)
    {
        largest = a[i][0];
        for (j = 0; j < q; j++)
        {
            if (a[i][j]>largest)
            largest = a[i][j];
        }
        printf("\nLargest of element of %d is %d",i+1,largest);
    }  




    return 0;
}