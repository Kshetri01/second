#include<stdio.h>
#include<conio.h>
struct book{
char book_name[50],author_name[50];
int price;
}s[5],temp;
int main()
{ int i;
    printf("enter the name of book, price of book and author of book");
    for(i=0;i<5;i++)
    {
        scanf("%s%d%s",s[i].book_name,&s[i].price,s[i].author_name);
    }
    printf("author name whose book's price is greater than 1000\n");
    for(i=0;i<5;i++)
    {
        if(s[i].price>1000){
            printf("%s\n",s[i].author_name);
        }
    }

return 0;
}