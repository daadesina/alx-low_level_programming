#include "main.h"

/**
 * _strlen - a character
 * @c: a character
 * Return: the result
 */
int _strlen(char *s)
{
	int my = 0;

	while (*s != '\0')
	{
		_putchar(*s);
	}
	_putchar('\n');
}
