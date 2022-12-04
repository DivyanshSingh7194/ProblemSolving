#include<stdio.h>
float fact(float n)
{
  float i,sum=1;
  for(i=1;i<=n;i++)
    {
      sum=sum*i;
    }
  return sum;
}
void main()
{
  float n,k=1;
  int i;
  printf("Enter limit\n");
  scanf("%f",&n);
  float sum=0.0;
  for(i=1;i<=n;i++,k=k+2)
    {
      if(i%2==0)
      {
        sum=sum-(i/(fact(k)));
      }
      else
      {
        sum=sum+(i/(fact(k)));
      }
    }
  printf("Sum is %f",sum);
}
