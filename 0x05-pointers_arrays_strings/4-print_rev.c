#include "main.h"

/**
 * print_rev - Entry point
 * @s: a character
 * Return: The result
 */
void print_rev(char *s)
{
	while (*s == '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
