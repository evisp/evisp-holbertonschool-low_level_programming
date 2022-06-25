#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as a paramter
 * on each element of an array
 * @array: array of elements
 * @size: size of the array
 * @action: a pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t idx;

	if (array == NULL || action == NULL)
		return;

	for (idx = 0; idx < size; idx++)
	  action(array[idx]);
}
