#include<stdio.h>
void main()
{
  int a,b,c;
  printf("Enter the sides of triangle\n");
  scanf("%d%d%d",&a,&b,&c);
  if(a==b&&b==c&&a==c)
  {
    printf("Triangle is Equilateral\n");
  }
  if(((a==b)||(b==c)||(c==a))&&((a!=b)&&(b!=c)&&(c!=a)))
  {
    printf("Triangle is Isosceles\n");
  }
  if(a!=b&&b!=c&&c!=a)
  {
    printf("Triangle is Scalene\n");
  }
}
