#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - function that converst a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number or 0 if there is one or more chars in the
 * string b that is not 0 or 1, b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, weight = 1;
	int i, length = 0;

	if (b == NULL)
		return (0);

	while (b[length] != '\0')
		length++;

	for (i = (length - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			sum = sum + weight;
		weight = weight * 2;
	}
	return (sum);
}
