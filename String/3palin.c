#include <stdio.h>
#include<string.h>
void main()
{
  char s1[20],s2[20];
  int i=0,l=0,flag=0;
  printf("Enter the String\n");
  gets(s1);
  while(s1[i]!='\0')
    {
      l=l+1;
      i=i+1;
    }
  i=0;
  while(s1[i]!='\0')
    {
      s2[l-1]=s1[i];
      l--;
      i++;
    }
  printf("%s\n",s2);
  for(i=0;i<'\0';i++)
    {
      if(s1[i]!=s2[i])
      {
        flag=1;
        break;
      }
    }
  if(flag==0)
    printf("%s is Palindrome",s1);
  else
    printf("%s is Not Palindrome",s1);
}
