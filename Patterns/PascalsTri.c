#include<stdio.h>
void main()
{
  int n,i,j,k;
  printf("Enter no. of rows\n");
  scanf("%d",&n);
  int a[n][n+1];
  for(i=0;i<n;i++)
    {
      for(j=0;j<n+1;j++)
        {
          if(i==0&&j==1)
            a[i][j]=1;
          else
            a[i][j]=0;
        }
    }
  for(i=1;i<n;i++)
    {
      for(j=1;j<n+1;j++)
        {
          a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
  for(i=0;i<n;i++)
    {
      for(j=0;j<n+1;j++)
        {
          printf("%d\t",a[i][j]);
        }
      printf("\n");
    }
  for(i=0;i<n;i++)
    {
      for(k=0;k<n-i;k++)
        {
          printf(" ");
        }
      for(j=0;j<n+1;j++)
        {
          printf(" ");
          if(a[i][j]!=0)
            printf("%d ",a[i][j]);
        }
      printf("\n");
    }
}
