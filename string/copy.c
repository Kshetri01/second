#include<stdio.h>
#include<conio.h>
int main()
{ char a[50],b[50];
int i;
    printf("enter the string");
    scanf("%s",a);
    for( i=0;a[i]!='\0';i++){
        b[i]=a[i];
    }
    b[i]='\0';
    printf("copied string is %s",b);
return 0;
}