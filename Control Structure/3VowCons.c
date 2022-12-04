#include<stdio.h>
void main()
{
  char ch;
  printf("Enter the character\n");
  scanf(" %c",&ch);
  int cha=ch;
  if(cha>=65&&cha<=90)
  {
    if(cha==65||cha==69||cha==73||cha==79||cha==85)
    {
      printf("%c is Vowel",ch);
    }
    else
    {
      printf("%c is Consonant",ch);
    }
  }
  else if(cha>=97&&cha<=122)
  {
    if(cha==97||cha==101||cha==105||cha==111||cha==117)
    {
      printf("%c is Vowel",ch);
    }
    else
    {
      printf("%c is Consonant",ch);
    }
  }
  else
  {
    printf("Wrong Input");
  }
}
