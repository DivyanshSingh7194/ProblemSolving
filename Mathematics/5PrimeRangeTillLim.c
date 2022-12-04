#include<stdio.h>
void primeFactors(int n)
{
  if(n==1)
  {
    printf("1 \n");
    return ;
  }
  int i;
  for(i=2;i<=n;i++)
    {
      if(n%i==0)
      {
        printf("%d \n",i);
        return ;
      }
    }
}
void main()
{
  int lim,i;
  printf("Enter limit\n");
  scanf("%d",&lim);
  for(i=1;i<=lim;i++)
    {
      primeFactors(i);
    }
}
