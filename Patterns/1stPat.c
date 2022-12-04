#include<stdio.h>
void main()
{
  int i,j,n,k;
  printf("Enter number of rows\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
      k=i;
      for(j=1;j<=i;j++)
        {
          printf("%d",k++);
        }
      k=i;
      printf("\n");
    }
}
