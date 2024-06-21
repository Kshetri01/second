#include <stdio.h>
#include <conio.h>
struct student
{
    char name[30];
    int rollno;
    float marks;
    char remarks[30];
} s[5];
int main()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("enter the name, roll no, marks and remarks of student\n");
        scanf("%s%d%f%s", s[i].name, &s[i].rollno, &s[i].marks, s[i].remarks);
    }
    printf("students who score more than 50\n");
    for (i = 0; i < 5; i++)
    {
        if (s[i].marks > 50)
        {
            printf("name=%s\t rollno=%d\t marks=%f\t remarks=%s\n", s[i].name, s[i].rollno, s[i].marks, s[i].remarks);
        }
    }
    return 0;
}