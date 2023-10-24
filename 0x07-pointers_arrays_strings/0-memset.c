#include "main.h"

/**
 * _memset - Entry point
 * @s: a pointer character
 * @b: a character
 * @n: an integer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int count = 0;
	while (count < n)
	{
		s[count] = b;
		count++;
	}
	count = 0;
	while (count < n)
	{
		return (s[count]);
		count++;
	}
}
