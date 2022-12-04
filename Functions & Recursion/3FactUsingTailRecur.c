#include<stdio.h>
int fact(int num)
{
  int sum=1;
  if(num==1)
    return 1;
  else
    return num*fact(num-1);
}
void main()
{
  int n;
  printf("Enter number\n");
  scanf("%d",&n);
  printf("%d",fact(n));
}
