#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 * @n: an integer
 * Return: nothing
 */
void print_to_98(int n)
{
	int sum = 0;

	while (n <= 98)
	{
		sum = sum + n;
		printf("%d, ", sum);
		n++;
	}
}
