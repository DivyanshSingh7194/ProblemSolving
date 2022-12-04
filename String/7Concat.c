#include<stdio.h>
void main()
{
  int i=0,k=0;
  char s1[100],s2[100],s3[200];
  printf("Enter string 1 & 2\n");
  scanf("%[^\n]%*c",s1);
  scanf("%[^\n]%*c",s2);
  while(s1[i]!='\0')
    {
      s3[i]=s1[i];
      i++;
    }
  s3[i]=' ';
  while(s2[k]!='\0')
    {
      s3[++i]=s2[k++];
    }
  printf("%s",s3);
}
