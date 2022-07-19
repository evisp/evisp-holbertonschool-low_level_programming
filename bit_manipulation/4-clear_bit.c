#include "main.h"

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int s = (sizeof(*n) * 8);

	if (index > s)
		return (-1);
	*n = *n & ~(1 << index);

	return (1);
}
