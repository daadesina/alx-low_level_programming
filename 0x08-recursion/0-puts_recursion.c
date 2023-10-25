#include "main.h"

/**
 * _puts_recursion - Entry point
 * @s: a character
 * Return: s
 */
void _puts_recursion(char *s)
{
	if (s != '\0')
	{
		return;
	}
	_putchar(_puts_recursion);
}
