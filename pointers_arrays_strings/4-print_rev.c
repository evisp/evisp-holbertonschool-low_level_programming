#include "main.h"

void print_rev(char *s)
{
  int len, i = 0;
  while (s[i] != '\0')
    i++;
  len = i - 1;
  
  while (len >= 0)
    {
      _putchar(s[len]);
      len--;
    }
  _putchar('\n');
}
