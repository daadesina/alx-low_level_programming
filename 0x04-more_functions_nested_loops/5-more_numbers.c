#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Return: Nothing to return
 */
void more_numbers(void)
{
	int count = 0;
	int a;

	while (count < 10)
	{
		a = 0;
		while (a <= 14)
		{
			if (a > 9)
			{
				_putchar('1');
			}
			_putchar((a % 10) + '0');
			a++;
		}
		_putchar('\n');
		count++;
	}
}
