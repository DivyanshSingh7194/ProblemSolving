#include<stdio.h>
void main()
{
  int r,c,i,j;
  printf("Enter the rows and columns\n");
  scanf("%d%d",&r,&c);
  int a[r][c],b[r][c];
  printf("Enter the elements\n");
  for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
  for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
        {
          b[j][i]=a[i][j];
        }
    }
  for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
        {
          a[r-1-i][j]=b[i][j];
        }
    }
  printf("\n90 Degree AntiClockwise Rotation\n");
  for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
        {
          printf("%d ",a[i][j]);
        }
      printf("\n");
    }
}
