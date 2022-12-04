#include<stdio.h>
void main()
{
  int i,j,n;
  printf("Enter rows\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
      printf("%d ",i);
    }
  for(i=n-1;i>=1;i--)
    {
      printf("%d ",i);
    }
  printf("\n");
  for(i=1;i<=n-1;i++)
    {
      for(j=1;j<=n-i;j++)
        {
          printf("%d ",j);
        }
      for(j=1;j<(2*i);j++)
        {
          printf(" ");
        }
      for(j=1;j<(2*i);j++)
        {
          printf(" ");
        }
      for(j=n-i;j>=1;j--)
        {
          printf("%d ",j);
        }
      printf("\n");
    }
}
