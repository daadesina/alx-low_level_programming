#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Return: single units
 */
void print_numbers(void)
{
	int a = '0';

	while (a <= '9')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
