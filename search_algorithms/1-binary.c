#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
	int right = size - 1;
	int left = 0;
	int mid;

	if (array)
	{
		while (left <= right)
		{
			printf("Searching in array: ");
			for (mid = left; mid < right; mid++)
				printf("%d, ", array[mid]);
			printf("%d\n", array[mid]);
			mid = left + (right - left) / 2;
			if (array[mid] == value)
				return (mid);
			if (array[mid] < value)
				left = mid + 1;
			else
				right = mid - 1;
		}
	}
	return (-1);
}
