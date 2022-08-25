#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
	size_t idx;
	char msg[] = "Value checked array";

	if (array)
	{
		for (idx = 0; idx < size; idx++)
		{
			printf("%s[%ld] = [%d]\n", msg, idx, array[idx]);
			if (array[idx] == value)
				return (idx);
		}
	}
	return (-1);
}
