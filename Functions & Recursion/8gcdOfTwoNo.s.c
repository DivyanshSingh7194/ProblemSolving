#include<stdio.h>
#include<stdbool.h>
bool Rem(int n,int d)
{
  if(n%d==0)
    return true;
  else
    return false;
}
void GCD(int nu1,int nu2)
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
  printf("GCD of %d & %d is %d",nu1,nu2,j);
}
void main()
{
  int n1,n2;
  printf("Enter the numbers\n");
  scanf("%d%d",&n1,&n2);
  GCD(n1,n2);
}
