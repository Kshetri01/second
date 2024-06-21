#include<stdio.h>
#include<conio.h>
int main()
{
    char name[50];
    int rollno,marks,i;
    FILE *ptr;
    ptr=fopen("hcoe.txt","r");
while (fscanf(ptr, "%s %d %d", name,&rollno, &marks) != EOF) {
    if(marks>=60){
        printf("Name: %s\t Roll no=%d\t Marks: %d\n", name,rollno, marks);
    }
}
return 0;
} 