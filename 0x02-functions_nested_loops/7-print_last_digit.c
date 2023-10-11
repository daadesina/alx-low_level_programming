#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print last digit
 * @r: any number
 *
 * Return: the last digit
 */
int print_last_digit(int r)
{
	if (r > 9)
	{
		int n = r % 10;

		return (n);
		printf("%d", n);
	}
	else
	{
		return (r);
		printf("%d", r);
	}
}
