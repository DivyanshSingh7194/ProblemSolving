#include<stdio.h>
int fact(int num)
{
  int i,sum=1;
  for(i=1;i<=num;i++)
    {
      sum=sum*i;
    }
  return sum;
}
int Strong(int n)
{
  int num=n,dig,sum=0;
  while(n!=0)
    {
      dig=n%10;
      sum=sum+fact(dig);
      n=n/10;
    }
  if(num==sum)
    printf("%d is Strong\n",num);
}
void main()
{
  int lim,i;
  printf("Enter limit\n");
  scanf("%d",&lim);
  for(i=1;i<=lim;i++)
    {
      Strong(i);
    }
}
