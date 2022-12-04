#include<stdio.h>
void main()
{
  int i,j,n,k,l;
  printf("Enter number of rows\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      for(k=i;k<n;k++)
        {
          printf(" ");
        }
      for(j=i;j>=1;j--)
        {
          printf("%d",j);
        }
      for(l=j+2;l<=i;l++)
        {
          printf("%d",l);
        }
      printf("\n");
    }
}
