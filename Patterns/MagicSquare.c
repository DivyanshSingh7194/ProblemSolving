#include<stdio.h>
void main()
{
  int n,i,j;
  printf("Enter the number of rows\n");
  scanf("%d",&n);
  int a[n][n];
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
        {
          a[i][j]=0;
        }
    }
  int r=0,c=(n/2),A=1;
  while(A<=(n*n))
    {
      a[r][c]=A++;r--;c++;
      if(r==-1&&c==n)
      {
        r=r+2;c=n-1;
      }
      else if(r==-1)
      {
        r=n-1;
      }
      else if(c==n)
      {
        c=0;
      }
      else if(a[r][c]!=0)
      {
        r=r+2;c=c-1;
      }
    }
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
        {
          printf("%d\t",a[i][j]);
        }
      printf("\n");
    }
}
