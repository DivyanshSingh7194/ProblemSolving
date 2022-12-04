#include <stdio.h>

int main(void)
{
  int yr;
  printf("Enter the year\n");
  scanf("%d",&yr);
  if((yr%400==0)||(yr%4==0&&yr%100!=0))
    printf("%d is leap year",yr);
}
