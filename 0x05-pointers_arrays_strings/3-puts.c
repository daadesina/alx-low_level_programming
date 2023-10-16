#include "main.h"

/**
 * _puts - Entry point
 * @str: a string;
 * Return: the result
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
