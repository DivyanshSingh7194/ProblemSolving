#include <stdio.h>
#include <string.h>
void main()
{
  int i=0,l=0;
  char s1[20],s2[20];
  printf("Enter string\n");
  gets(s1);
  while(s1[i]!='\0')
    {
      l=l+1;
      i=i+1;
    }
  i=0,l=l-1;

  printf("Reverse of %s is\n",s1);
  for(int i=0;i<strlen(s1);i++){
    printf("%c",s1[(strlen(s1)-1)-i]);
  }
}
