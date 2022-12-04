#include<stdio.h>
void main()
{
  int r,c,i,j;
  printf("Enter the rows and columns\n");
  scanf("%d%d",&r,&c);
  int a[r][c],b[r][c],x[r][c];
  printf("Enter the elements\n");
  for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
        {
          scanf("%d",&a[i][j]);
          x[i][j]=a[i][j];
        }
    }
  for(i=r-1;i>=0;i--)
    {
      for(j=c-1;j>=0;j--)
        {
          b[i][j]=a[r-i-1][c-j-1];
        }
    }
  for(i=r-1;i>=0;i--)
    {
      for(j=c-1;j>=0;j--)
        {
          a[i][j]=b[r-i-1][c-j-1];
        }
    }
  int flag=1;
  printf("\n360 Turn\n");
  for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
        {
          printf("%d ",a[i][j]);
          if(a[i][j]!=x[i][j])
          {
            flag=0;
            break;
          }
        }
      printf("\n");
    }
  if(flag=0)
  {
    printf("360 Not Done Properly\n");
  }
  else
  {
    printf("360 Done Properly");
  }
}
