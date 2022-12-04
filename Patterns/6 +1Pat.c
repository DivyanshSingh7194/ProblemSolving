#include<stdio.h>
void main()
{
  int i,j,k,n,l;
  printf("Enter no. of rows\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
      for(k=5;k>i;k--)
        {
          printf(" ");
        }
      for(j=k;j<(i+i);j++)
        {
          printf("%d",j);
        }
      for(l=j-1;l>k;l--)
        {
          printf("%d",l-1);
        }
      printf("\n");
    }
}
