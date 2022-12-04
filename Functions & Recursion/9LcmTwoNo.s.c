#include<stdio.h>
#include<stdbool.h>
bool Rem(int n,int d)
{
  if(n%d==0)
    return true;
  else
    return false;
}
int GCD(int nu1,int nu2)
{
  int i,j;
  for(i=1;i<nu1 && i<nu2;i++)
    {
      if(Rem(nu1,i))
      {
        if(Rem(nu2,i))
        {
          j=i;
        }
      }
    }
  return j;
}
void LCM(int n1,int n2)
{
  int prod=n1*n2,gcd=GCD(n1,n2);
  printf("LCM of %d & %d is %d",n1,n2,(prod/gcd));
}
void main()
{
  int nu1,nu2;
  printf("Enter the numbers\n");
  scanf("%d%d",&nu1,&nu2);
  LCM(nu1,nu2);
}
