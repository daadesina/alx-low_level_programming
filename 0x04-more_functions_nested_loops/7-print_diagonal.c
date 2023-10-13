#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: integer
 * Return: Nothing to return
 */
void print_diagonal(int n)
{
	int a = 0;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (a < n)
		{
			_putchar('\\');
			if (a < (n - 1))
			{
				_putchar('\n');
				b = 0;
				while (b < (a + 1))
				{
					_putchar(' ');
					b++;
				}
			}
			a++;
		}
	}
}
