#include "main.h"

/**
 * print_most_numbers - Entry point
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int a = '0';

	while (a <= '9')
	{
		a++;

		if (a == '2' || a == '4')
		{
			continue;
		}
		_putchar(a);
	}
	_putchar('\n');
}
