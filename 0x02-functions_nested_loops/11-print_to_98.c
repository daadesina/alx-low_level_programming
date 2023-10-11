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

	while (n <= 97)
	{
		sum = n + 1;
		printf("%d, ", sum);
		n++;
	}
	printf("%d", sum);
}
