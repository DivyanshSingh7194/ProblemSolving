#include<stdio.h>
int fact(int n)
{
  int fac=1;
  for(int i=1;i<=n;i++)
    {
      fac=fac*i;
    }
  return fac;
}
void main()
{
  int n,i;
  float sum=0.0;
  printf("Enter limit\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
      sum=sum+(fact(i)/i);
    }
  printf("Sum is %f",sum);
}
