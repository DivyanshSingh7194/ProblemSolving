#include<stdio.h>
#include<math.h>
#define ll long long
void main()
{
  ll a,b,k,count=0;
  printf("Enter A and B\n");
  scanf("%ld%ld",&a,&b);
  printf("Enter Kth Digit Value\n");
  scanf("%ld",&k);
  ll pow1=pow(a,b);
  ll power=pow1;
  while(power!=0)
    {
      count++;
      power=power/10;
    }
  ll po[count];
  ll i=count;
  while(pow1!=0)
    {
      po[i--]=pow1%10;
      pow1=pow1/10;
    }
  for(i=count;i>=0;i--)
    {
      if(i==(count-k+1))
      {
        printf("%ld",po[i]);
        break;
      }
    }
}
