#include<stdio.h>
void prime(int n)
{
  int i,c=2;
  for(i=2;i<n;i++)
    {
      if(n%i==0)
      {
        c++;
        break;
      }
    }
  if(c==2)
    printf("%d is Prime \t",n);
}
void main()
{
  int lim1,lim2;
  printf("Enter limits\n");
  scanf("%d%d",&lim1,&lim2);
  for(int i=lim1+1;i<lim2;i++)
    {
      prime(i);
    }
}
