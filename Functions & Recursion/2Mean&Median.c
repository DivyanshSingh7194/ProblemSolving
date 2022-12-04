#include<stdio.h>
void mean(int a[5])
{
  int sum=0;
  for(int i=0;i<5;i++)
    {
    sum=sum+a[i];
    }
  printf("Mean : %.2f\n",(sum/5.0));
}
void median(int b[5])
{
  printf("Median : %d",b[2]);
}
void main()
{
  int n[5],i;
  printf("Enter numbers\n");
  for(i=0;i<5;i++)
    {
      scanf("%d",&n[i]);
    }
  mean(n);
  median(n);
}
