#include <stdio.h>
#include "main.h"

/**
 * largest_number - Entry point
 * @a: First number
 * @b: second number
 * @c: Third number
 * Return: Alway 0
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
		return (largest);
	}
	else if (b > a && b > c)
	{
		largest = b;
		return (largest);
	}
	else
	{
		largest = c;
		return (largest);
	}

	return (largest);
}
