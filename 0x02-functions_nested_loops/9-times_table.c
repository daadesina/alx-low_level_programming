#include <stdio.h>
#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: Nothing to return
 */
void times_table(void)
{
	int a = 0;

	while (a <= 12)
	{
		int b = 3 * a;

		printf("%d, ", b);
		a++;
	}
}
