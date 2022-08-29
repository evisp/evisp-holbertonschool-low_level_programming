#include "search_algos.h"

int interpolation_search(int * array, size_t size, int value)
{
    size_t low = 0;
    size_t high = size - 1;
    size_t mid;

    if (array == NULL)
      return (-1);
    
    while ((array[high] != array[low]) && (value >= array[low]) && (value <= array[high]))
      {
        mid = low + ((value - array[low]) * (high - low) / (array[high] - array[low]));
	if (mid < size)
	  printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
	else
	  {
	    printf("Value checked array[%ld] is out of range\n", mid);
	    break;
	  }
        if (array[mid] < value)
            low = mid + 1;
        else if (value < array[mid])
            high = mid - 1;
        else
            return mid;
    }

    if (value == array[low])
        return low;
    else
        return -1;
}
