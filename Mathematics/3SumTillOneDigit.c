#include<stdio.h>
int Recur(int num)
{
  int sum=0,n1=num,c=0;
  while(n1!=0)
    {
      c++;
      n1=n1/10;
    }
  if(c==1)
    return num;
  else
  {
    while(num!=0)
      {
        sum=sum+(num%10);
        num=num/10;
      }
  }
  return Recur(sum);
}
void main()
{
  int n;
  printf("Enter number\n");
  scanf("%d",&n);
  printf("%d",Recur(n));
}
