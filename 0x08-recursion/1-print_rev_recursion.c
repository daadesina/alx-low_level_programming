#include "main.h"

/**
 * _print_rev_recursion - Entry point
 * @s: a character
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	int i;
	if (*s != '\0')
	{
		i = *s;
		_print_rev_recursion(s + 1);
	}
	_putchar(i);
}
