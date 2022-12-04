#include<stdio.h>
int fact(int n)
{
  int sum=1,i;
  for(i=1;i<=n;i++)
    {
      sum=sum*i;
    }
  return sum;
}
void main()
{
  int i,lim,sum=0;
  printf("Enter the limit\n");
  scanf("%d",&lim);
  for(i=1;i<=lim;i++)
    {
      sum=sum+fact(i);
    }
  printf("Sum is %d",sum);
}
