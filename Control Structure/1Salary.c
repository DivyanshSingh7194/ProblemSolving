#include<stdio.h>
void main()
{
  float basic,hra,da,allow,pf;
  printf("Enter the basic salary\n");
  scanf("%f",&basic);
  hra=0.2*basic;da=0.5*basic;pf=0.11*basic;
  int total;
  char grade;
  printf("Enter the UpperCase Letter\n");
  scanf(" %c",&grade);
  switch(grade)
    {
      case 'A':
      total=basic+hra+da+1700+pf;
      printf("%d",total);
      break;

      case 'B':
      total=basic+hra+da+1500+pf;
      printf("%d",total);
      break;

      default:
      total=basic+hra+da+1300+pf;
      printf("%d",total);
      break;
    }
}
