#include "main.h"

/**
 * _strlen - a character
 * @c: a character
 * Return: the result
 */
int _strlen(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
