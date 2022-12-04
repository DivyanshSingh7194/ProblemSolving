#include<stdio.h>
#include<math.h>
void main()
{
    double n,m,i,sum=1;
    printf("Enter rows&columns\n");
    scanf("%lf%lf",&n,&m);
    sum=ceil(n/2.0)*ceil(m/2.0);
    printf("Number of supply drops needed %.0lf\n",sum);
}
