#include<stdio.h>
void armstrong(int n)
{
  int num=n,sum=0,dig;
  while(n!=0)
    {
      dig=n%10;
      sum=sum+(dig*dig*dig);
      n=n/10;
    }
  if(num==sum)
    printf("%d is Armstrong\n",num);
}
void main()
{
  int lim1,lim2,i;
  printf("Enter limits\n");
  scanf("%d%d",&lim1,&lim2);
  for(i=lim1+1;i<lim2;i++)
    {
      armstrong(i);
    }
}
