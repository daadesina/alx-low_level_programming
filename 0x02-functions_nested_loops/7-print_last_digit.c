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
	int last = r % 10;

	if (r < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
