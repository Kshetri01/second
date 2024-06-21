#include <stdio.h>
#include <conio.h>
#include <string.h>
struct student
{
    char name[30];
    int rollno;
    float marks;
    char remarks[30];
} s[5], temp;
int main()
{
    int i, j;
    for (i = 0; i < 5; i++)
    {
        printf("enter the name, roll no, marks and remarks of student\n");
        scanf("%s%d%f%s", s[i].name, &s[i].rollno, &s[i].marks, s[i].remarks);
    }
    printf("in alphabetical order\n");
    for (i = 0; i < 5; i++)
    {
        for (j = i+1; j < 5; j++)
        {
            if (strcmp(s[i].name, s[j].name) > 0)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
        printf("name=%s\t rollno=%d\t marks=%f\t remarks=%s", s[i].name, s[i].rollno, s[i].marks, s[i].remarks);
    }
    return 0;
}