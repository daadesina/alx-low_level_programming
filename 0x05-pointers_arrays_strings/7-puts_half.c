#include "main.h"
#include <string.h>

/**
 * puts_half - Entry point
 * @str: a string
 * Return: the result
 */
void puts_half(char *str)
{
	int len, i;

	len = strlen(str) / 2;
	i = 0;
	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
