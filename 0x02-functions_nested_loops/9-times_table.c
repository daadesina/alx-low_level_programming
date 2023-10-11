#include "main.h"
#include <stdio.h>

/**
 * times_table - Entry point
 *
 * Return: nothing
 */
void times_table(void)
{
	int a = 0;

	while (a <= 12)
	{
		int b = 3 * a;

		printf("%d", b);
		if (a < 12)
		{
			_putchar(',');
			_putchar(' ');
		}
		a++;
	}
}
