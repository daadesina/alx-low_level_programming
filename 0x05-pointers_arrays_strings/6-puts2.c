#include "main.h"

/**
 * puts2 - Entry point
 * @str: string
 * Return: the result
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
