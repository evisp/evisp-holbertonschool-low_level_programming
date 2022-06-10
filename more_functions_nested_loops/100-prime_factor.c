#include "main.h"
#include <stdio.h>

int main(void)
{
	long int a, n = 612852475143;

	for (a = 2; a < n; a++)
		if (n % a == 0)
		{
			n = n / a;
		}
	printf("%ld\n", a);
	return (0);
}
