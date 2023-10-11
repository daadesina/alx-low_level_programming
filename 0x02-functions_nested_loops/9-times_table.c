#include <stdio.h>
#include "main.h"

/**
 * times_table - Entry mode
 *
 * Return: Nothing to return
 */
void times_table(void)
{
	int a;
	int count = 0;

	while (count <= 9)
	{
		a = 0;

		while (a <= 12)
		{
			int b = count * a;

			printf("%d", b);
			if (a <= 11)
			{
				_putchar(',');
				_putchar(' ');
			}
			a++;
		}
		count++;
		_putchar('\n');
	}
}
