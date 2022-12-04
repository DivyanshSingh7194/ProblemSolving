#include<stdio.h>
int pow(int a,int b)
{
  int i,sum=1;
  for(i=0;i<b;i++)
    {
      sum=sum*a;
    }
  return sum;
}
int fact(int n)
{
  int i,sum=1;
  for(i=1;i<=n;i++)
    {
      sum=sum*i;
    }
  return sum;
}
void main()
{
  int i,x,lim;
  printf("Enter X\n");
  scanf("%d",&x);
  printf("Enter limit\n");
  scanf("%d",&lim);
  float sum=1.0;
  for(i=1;i<lim;i++)
    {
      sum=sum+(pow(x,i)/fact(i));
    }
  printf("Sum is %f",sum);
}
