#include<stdio.h>
void main()
{
  int i,j,n;
  printf("Enter rows\n");
  scanf("%d",&n);
  int space=0;
  for(i=n;i>0;i=i-2)
    {
      for(j=0;j<space;j++)
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
  space=space-2;
  for(i=2;i<n;i=i+2)
    {
      space=space-2;
      for(j=0;j<space;j++)
        {
          printf(" ");
        }
      for(j=0;j<=i;j++)
        {
          printf("* ");
        }
      printf("\n");
    }
}
