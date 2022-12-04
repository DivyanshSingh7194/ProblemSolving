#include<stdio.h>
#include<math.h>
void main()
{
  int a,b,c;
  printf("Enter a,b,c\n");
  scanf("%d%d%d",&a,&b,&c);
  int D=(b*b)-(4*a*c);
  float x1,x2;
  if(D==0)
  {
    printf("Roots are Real and Equal\n");
    x1=-b/(2.0*a);
    printf("%.2f",x1);
  }
  else if(D<0)
  {
    printf("Roots are Imaginary and Distinct\n");
    x1=-b/(2.0*a);
    x2=sqrt(-D)/(2.0*a);
    printf("%.2f+%.2fi\n%.2f-%.2fi",x1,x2,x1,x2);
  }
  else
  {
    printf("Roots are Real and Distinct\n");
    x1=(-b+sqrt(D))/(2.0*a);
    x2=(-b-sqrt(D))/(2.0*a);
    printf("%.2f\n%.2f",x1,x2);
  }
}
