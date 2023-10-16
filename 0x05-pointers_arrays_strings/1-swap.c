#include "main.h"

/**
 * swap_int - Entry point
 * @a: a pointer
 * @b: another pointer
 * Return: the result
 */
void swap_int(int *a, int *b)
{
	int hold = *a;
	*a = *b;
	*b = hold;
}
