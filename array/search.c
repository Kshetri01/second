#include<stdio.h>
#include<conio.h>
void search(char name[],char a)
{
    for(int i=0;name[i]!='\n';i++){
        if(name[i]=='a')
        {
            printf("the character is present");
            return;
        }
    }
    printf("not present");
}
int main()
{
    char word[]="microsoft";
    char letter='o';
    search(word,letter);
return 0;
}