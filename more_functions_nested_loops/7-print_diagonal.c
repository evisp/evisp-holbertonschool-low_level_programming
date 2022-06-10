#include "main.h"

void print_diagonal(int n)
{
	int len, space;

	for (len = 0; len < n; len++)
	{
		for (space = 0; space < len; space++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
	  _putchar('\n');
}
