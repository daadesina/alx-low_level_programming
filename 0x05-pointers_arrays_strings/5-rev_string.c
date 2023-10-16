#include "main.h"

/**
 * rev_string - Entry point
 * @s: a string
 * Return: Nothing to return
 */
void rev_string(char *s)
{
	int real, roll;

	roll = 0;
	while (s[roll] != '\0')
	{
		roll++;
	}
	real = roll - 1;
	while (real >= 0)
	{
		_putchar(s[real]);
		real--;
	}
	_putchar('\n');
}
