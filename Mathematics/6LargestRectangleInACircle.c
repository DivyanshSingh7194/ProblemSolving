#include<stdio.h>
#include<math.h>
void main()
{
  float r,l,b;
  printf("Enter the radius\n");
  scanf("%f",&r);
  b=sqrt((2*pow(r,2)));
  printf("Area of Largest Rectangle %.0f",(b*b));
}
