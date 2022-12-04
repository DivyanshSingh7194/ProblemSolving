#include <stdio.h>
void main()
{
  int a,b,c;
  printf("Enter the numbers\n");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b)
  {
    if(a>c)
      printf("First big");
    else
      printf("Third big");
  }
  else
  {
    if(b>c)
      printf("Second big");
    else
      printf("Third big");
  }
}
