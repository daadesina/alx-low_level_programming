#include "main.h"

/**
 * print_sign - Positive and Negative
 * @n: a number
 *
 * Return: 1 if positive, 0 else.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		putchar('-');
	}
}
