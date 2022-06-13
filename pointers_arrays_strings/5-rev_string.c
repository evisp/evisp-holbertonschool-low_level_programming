#include "main.h"

void rev_string(char *s)
{
  int tmp, len, idx, i = 0;

  while(s[i] != '\0')
    i++;
  len = i;

  for (idx = len - 1; idx >= len / 2; idx--)
    {
      tmp = s[idx];
      s[idx] = s[len - idx - 1];
      s[len - idx - 1] = tmp;
    }
}
