#include <stdio.h>
void main()
{
  int x,y;
  printf("Enter the coords\n");
  scanf("%d%d",&x,&y);
  if(x>0)
  {
    if(y>0)
      printf("At Quad 1");
    else if(y<0)
      printf("At Quad 4");
    else
      printf("At Origin");
  }
  else if(x<0)
  {
    if(y>0)
      printf("At Quad 2");
    else if(y<0)
      printf("At Quad 3");
    else
      printf("At Origin");
  }
  else
  {
    if(y==0)
      printf("At Origin");
    else
      printf("At Y Axis");
  }
}
