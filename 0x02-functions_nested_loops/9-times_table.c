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
	int c;

	while (a <= 11)
	{
		int b = 3 * a;

		printf("%d, ", b);
		a++;
	}
	c = 3 * 12;
	printf("%d\n", c);
}
