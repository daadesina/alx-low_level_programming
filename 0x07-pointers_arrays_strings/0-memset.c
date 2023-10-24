#include "main.h"
#include <string.h>

/**
 * _memset - Entry point
 * @s: a pointer character
 * @b: a character
 * @n: an integer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	for (count = 0; n > 0; i++; n--;)
	{
		s[count] = b;
	}

	return (s);
}
