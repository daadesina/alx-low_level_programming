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
	int i = 0;

	memset(*s, b, sizeof(char) * n);
	while (i < n)
	{
		return (s[i]);
		i++;
	}
}
