#include<stdio.h>
void main()
{
  int n,i,suml=0,sumr=0;
  printf("Enter no. of elements (odd)\n");
  scanf("%d",&n);
  int a[n];
  printf("Enter elements\n");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  for(i=0;i<n/2;i++)
    {
      suml=suml+a[i];
    }
  for(i=n/2+1;i<n;i++)
    {
      sumr=sumr+a[i];
    }
  if(suml==sumr)
    printf("Number is Balanced\n");
  else
    printf("Number is not Balanced\n");
}
