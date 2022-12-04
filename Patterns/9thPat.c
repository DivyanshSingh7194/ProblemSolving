#include<stdio.h>
void main()
{
  int i,j,n;
  printf("Enter rows\n");
  scanf("%d",&n);
  int space=n-1;
  for(i=0;i<n;i=i+2)
    {
      for(j=0;j<space;j++)
        {
          printf(" ");
        }
      for(j=0;j<=i;j++)
        {
          printf("* ");
        }
      printf("\n");
      space=space-2;
    }
  space=1;
  for(i=n-2;i>0;i=i-2)
    {
      for(j=0;j<=space;j++)
        {
          printf(" ");
        }
      for(j=0;j<i;j++)
        {
          printf("* ");
        }
      printf("\n");
      space=space+2;
    }
}
