#include<stdio.h>
#include<conio.h>
void printstring(char arr[]){
    for(int i=0;arr[i]!=0;i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}
int main()
{
    char firstname[]="Manjil";
    char lastname[]="Chhetri";
    printstring(firstname);
    printstring(lastname);
return 0;
}