#include "main.h"
#include <stdio.h>

/**
 * _memset - Entry point
 * @s: a pointer character
 * @b: a character
 * @n: an integer
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
