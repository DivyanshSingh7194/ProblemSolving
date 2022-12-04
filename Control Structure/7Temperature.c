#include<stdio.h>
void main()
{
  int temp;
  printf("Enter the temperature in Centigrade\n");
  scanf("%d",&temp);
  if(temp<0)
  {
    printf("Freezing Weather\n");
  }
  else if(temp>=0&&temp<10)
  {
    printf("Very Cold Weather\n");
  }
  else if(temp>=10&&temp<20)
  {
    printf("Cold Weather\n");
  }
  else if(temp>=20&&temp<30)
  {
    printf("Normal in temp\n");
  }
  else if(temp>=30&&temp<40)
  {
    printf("Its Hot\n");
  }
  else if(temp>=40)
  {
    printf("Its Very Hot\n");
  }
}
