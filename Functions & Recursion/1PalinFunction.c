#include<stdio.h>
#include<math.h>
int palin(int num)
{
  int i,n,co=-1,dig=0,sum=0;
  n=num;
  while(n!=0)
    {
      co++;
      n=n/10;
    }
  while(num!=0)
    {
      dig=num%10;
      sum=sum+(pow(10,co--)*(dig));
      num=num/10;
    }
  return sum;
}
void main()
{
  int n,num;
  printf("Enter number\n");
  scanf("%d",&n);
  num=palin(n);
  if(num==n)
    printf("%d is Palindrome",n);
  else
    printf("%d is not Palindrome",n);
}
