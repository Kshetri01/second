#include <stdio.h>
#include <conio.h>
struct student
{
    char name[30];
    int rollno;
    float marks;
    char remarks[30];
    struct dob
    {
        int yy, mm, dd;
    } d;
} s[5];
int main()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("enter the name, roll no, marks remarks and dob of student\n");
        scanf("%s%d%f%s%d%d%d", s[i].name, &s[i].rollno, &s[i].marks, s[i].remarks, &s[i].d.yy, &s[i].d.mm, &s[i].d.dd);
    }

    for (i = 0; i < 5; i++)
    {
        if (s[i].marks > 50)
        {
            printf("name=%s\t rollno=%d\t marks=%f\t remarks=%s\t DOB=%d/%d/%d\n", s[i].name, s[i].rollno, s[i].marks, s[i].remarks[i], s[i].d.yy, s[i].d.mm, s[i].d.dd);
        }
    }
    return 0;
}