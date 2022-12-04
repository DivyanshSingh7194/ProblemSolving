#include<stdio.h>
int mul(int i1,int i2,int i3)
{
  return (i1*i2*i3);
}
void main()
{
  int n,i,sum=0;
  printf("Enter limit\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
      sum=sum+mul(i,i+1,i+2);
    }
  printf("Sum is %d",sum);
}
