#include<stdio.h>
float pow(float a,float b)
{
  float i,sum=1;
  for(i=1;i<=b;i++)
    {
      sum=sum*a;
    }
  return sum;
}
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
  float i=2.0,lim,x,sum=1,a;
  int k=1;
  printf("Enter limit\n");
  scanf("%f",&lim);
  printf("Enter X\n");
  scanf("%f",&x);
  while(i<=lim*2)
    {
      if(k%2==0){
        a=((pow(x,i))/(fact(i)));
        sum=sum+a;
        }
      else{
        a=((pow(x,i))/(fact(i)));
        sum=sum-a;
        }
      i=i+2;k++;
    }
  printf("Sum is %f",sum);
}
