#include "main.h"
#include <stdio.h>

/**
 * times_table - Entry point
 *
 * Return: nothing
 */
void times_table(void)
{
	int a;
	int c;
	int count = 0;

	while (count <= 9)
	{
		a = 0;
		while (a <= 8)
		{
			int b = count * a;
	
			printf("%d, ", b);
			a++;
		}
		c = count * 9;
		printf("%d\n", c);
		count++;
	}
}
