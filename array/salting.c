#include<stdio.h>
#include<conio.h>
#include<string.h>
void salting(char password[]){
    char salt[]="3op5";
    char new[200];
    strcpy(new,password);
    strcat(new,salt);
    puts(new);

}
int main()

{
    char password[100];
    scanf("%s",password);
    salting(password);
    
return 0;
}