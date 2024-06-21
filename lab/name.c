 #include <stdio.h>
void printName(char* name,int count) 
{ 
    printf("%s\n",name); 
    count=count+1; 
    if(count<10) 
        printName(name,count); 
} 
int main() 
{ 
    char name[50];  
    printf("\nEnter your name :"); 
    scanf("%s",name); 
    printName(name,0); 
    return 0; 
}
