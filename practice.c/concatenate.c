#include <stdio.h>
int main()
{
    char arr1[100], arr2[100];
    int i, j;
    printf("enter the first ");
    scanf("%s", arr1);
    printf("enter the second");
    scanf("%s", arr2);
    for (i = 0; arr1[i] != '\0'; i++)
        ;
    for (j = 0; arr2[j] != '\0'; j++, i++)
    {
        arr1[i] = arr2[j];
    }
    arr1[i] = '\0';
    printf("concatanate string is %s", arr1);
    return 0;
}