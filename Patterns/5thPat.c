#include<stdio.h>
void main()
{
  int i,j,n;
  printf("Enter number of rows\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      for(j=n-i;j<=n;j++)
        {
          printf("%c",64+j);
        }
      printf("\n");
    }
}
