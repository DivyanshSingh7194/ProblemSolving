#include<stdio.h>
void main()
{
  int i,j,n,k;
  printf("Enter number of rows\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      k=i;
      for(j=0;j<=i;j++)
        {
          printf("%c",65+k++);
        }
      k=i;
      printf("\n");
    }
}
