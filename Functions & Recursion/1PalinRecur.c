#include<stdio.h>
#include<math.h>
int Palin(int num,int c)
{
  if(num==0)
    return c;
  c=(c*10)+(num%10);
  return Palin(num/10,c);
}
void main()
{
  int n,num;
  printf("Enter number\n");
  scanf("%d",&n);
  num=Palin(n,0);
  if(num==n)
    printf("%d is palindrome",n);
  else
    printf("%d is not palindrome",n);
}
