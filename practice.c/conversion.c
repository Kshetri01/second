#include<stdio.h>/*to convert all the vowels to uppercase */
#include<conio.h>
void check(char a[]){
    for(int i=0;a[i]!='\n';i++)
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
{
    if(a[i]>=97)
    {
        a[i]=a[i]-32;
    }
}
printf("%s",a);
}
int main()
{
   char name[100];
    fgets(name,100,stdin);
    check(name);

return 0;
}