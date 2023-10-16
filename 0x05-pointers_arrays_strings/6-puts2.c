#include "main.h"
#include <string.h>

/**
 * puts2 - Entry point
 * @str: string
 * Return: the result
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	i = 0;
	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
