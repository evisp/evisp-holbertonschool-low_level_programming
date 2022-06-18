#include "main.h"

int _find_sqrt(int number, int root)
{
  if (number < 0)
    return (-1);
  if (number == 1)
    return (1);
  if (root > number / 2)
    return (-1);
  if (number != root * root)
    return (_find_sqrt(number, root + 1));
  if (number = root * root)
    return (root);
  return (-1);
}

int _sqrt_recursion(n)
{
  return (_find_sqrt(n, 0));
}
