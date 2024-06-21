#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, a[3][3], count = 0;
    printf("enter the matrix");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i ==  j && a[i][j] != 1)
            {
                count = 1;
                break;
            }
            else if (i != j && a[i][j] != 0)
            {
                count = 1;
                break;
            }
        }
    }
    if(count==0){
        printf("identity matrix");
    }
    else
    printf("not identity matrix");
    return 0;
}