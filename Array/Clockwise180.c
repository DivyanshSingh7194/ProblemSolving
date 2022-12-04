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
  for(i=r-1;i>=0;i--)
    {
      for(j=c-1;j>=0;j--)
        {
          b[i][j]=a[r-i-1][c-j-1];
        }
    }
  printf("\n180 Degree Clockwise Rotation\n");
  for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
        {
          printf("%d ",b[i][j]);
        }
      printf("\n");
    }
}
