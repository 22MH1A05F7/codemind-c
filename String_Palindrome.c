#include<stdio.h>
int main()
{
  char text[100];
  int b, m, e, len = 0;
  scanf("%s",text);
  while (text[len] != NULL)
  len++;
  e = len - 1;
  m = len/2;

  for (b=0;b< m;b++)
  {
    if (text[b] != text[e])
    {
      printf("Not Palindrome
");
      break;
    }
    e--;
  }
  if (b==m)
    printf("Palindrome");
}