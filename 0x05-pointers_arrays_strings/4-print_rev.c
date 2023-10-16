#include "main.h"

/**
 * print_rev - Entry point
 * @s: a character
 * Return: The result
 */
void print_rev(char *s)
{
	int n, i;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	i = n - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
