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
		else
		{
			_putchar((a % 10) + '0');
		}
	}

	_putchar('\n');
}
