#include<stdio.h>
void main()
{
  int i,j,n,k,l;
  printf("Enter number of rows\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
      l=i;
      for(k=1;k<=n-i;k++)
        {
          printf(" ");
        }
      for(j=1;j<=i;j++)
        {
          printf("%d ",l++);
        }
      printf("\n");
    }
}
