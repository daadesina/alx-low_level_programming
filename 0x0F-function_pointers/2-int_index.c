#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Entry point
 * @array: an int
 * @size: an int
 * @cmp: an int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || size == NULL || cmp == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
