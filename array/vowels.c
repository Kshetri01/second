#include<stdio.h>
#include<conio.h>
int c(char words[]){
    int count=0;
    for(int i=0;i!='\n';i++){
if(words[i]=='a'||words[i]=='e'||words[i]=='i'||words[i]=='o'||words[i]=='u'){
    count++;
}
    }
    return count;
}
int main()
{
char str[100]="Manjil";
printf("%d is the no of vowels in the words",c(str));
return 0;
}