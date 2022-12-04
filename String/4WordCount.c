#include<stdio.h>
void main()
{
  int i,count=0;
  char ar[200];
  printf("Your Text:\n");
  scanf("%[^\n]s",ar);
  for(i=0;ar[i]!='\0';i++)
    {
      if(ar[i]==' '&&ar[i+1]!=' ')
      {
        count++;
      }
    }
  printf("Count:%d",count+1);
}
