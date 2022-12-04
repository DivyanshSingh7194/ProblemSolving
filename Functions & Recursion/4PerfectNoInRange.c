#include<stdio.h>
#define ll long long
void Perfect(ll n)
{
  ll i,sum=0;
  for(i=1;i<n;i++)
    {
      if(n%i==0)
        sum=sum+i;
    }
  if(sum==n)
    printf("%d is Perfect number\n",n);
}
void main()
{
  ll lim;
  printf("Enter the limit\n");
  scanf("%d",&lim);
  for(ll i=1;i<=lim;i++)
    {
      Perfect(i);
    }
}
