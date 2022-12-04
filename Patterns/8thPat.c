#include<stdio.h>
void main()
{
  int i,j,n,k,l;
  printf("Enter number of rows\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
      for(k=1;k<=n-i;k++)
        {
          printf(" ");
        }
      for(j=1;j<2*i;j++)
        {
          printf("*");
        }
      printf("\n");
    }
}
