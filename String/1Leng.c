#include<stdio.h>
#include<string.h>
void main()
{
  char name[20];
  printf("Enter the String\n");
  gets(name);
  int i=0;
  while(name[i]!='\0')
    {
      i=i+1;
    }
  printf("String length %d\n",i);
}
