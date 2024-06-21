#include<stdio.h>
#include<conio.h>
int main()
{
    char words[100];
    fgets(words,100,stdin); /*input a string(even a multiwords)*/
    puts(words); /*output a string*/
return 0;
}