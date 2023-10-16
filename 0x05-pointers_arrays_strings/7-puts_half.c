#include "main.h"
#include <string.h>

/**
 * puts_half - Entry point
 * @str: a string
 * Return: the result
 */
void puts_half(char *str)
{
	int len, i, halfLen;

	len = strlen(str);
	if ((len % 2) == 0)
	{
		halfLen = len / 2;
	}
	else
	{
		halfLen = (len + 1) / 2;
	}
	i = halfLen;
	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
