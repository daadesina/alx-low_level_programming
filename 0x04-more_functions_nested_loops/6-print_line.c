#include "main.h"

/**
 * print_line - Entry point
 *
 * Return: Nothing
 */
void print_line(int n)
{
	int a = 0;

	while (a < n)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
