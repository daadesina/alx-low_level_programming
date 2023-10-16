#include "main.h"

/**
 * print_rev - Entry point
 * @s: a character
 * Return: The result
 */
void print_rev(char *c)
{
	while (*c == '\0')
	{
		_putchar(*c);
		c--;
	}
	_putchar('\n');
}
