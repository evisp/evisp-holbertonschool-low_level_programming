#include "main.h"

int _find_sqrt(int n, int root)
{
	if (root * root == n)
		return (root);
	if (root == n / 2)
		return (-1);
	else
		return (_find_sqrt(n, root + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	else
		return (_find_sqrt(n, 0));

}
