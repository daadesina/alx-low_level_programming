#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Entry point
 * @array: an int
 * @size: size
 * @action: function pointer
 * Return: the result
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size <= 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
