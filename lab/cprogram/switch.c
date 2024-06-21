#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
  char day;
  printf("enter the day");
  scanf("%c", &day);
  switch (day)
  {
  case 'a':
    printf("sunday");
    break;
  case 'b':
    printf("monday");
    break;

  case 'c':
    printf("tuesday");
    break;

  case 'd':
    printf("wednesday");
    break;

  case 'e':
    printf("thursday");
    break;

  case 'f':
    printf("friday");
    break;

  case 'g':
    printf("saturday");
    break;

  default:
    printf("invalid character");
    break;
  }
  return 0;
}