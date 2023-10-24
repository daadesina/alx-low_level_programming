#include "main.h"
#include <string.h>

/**
 * _memcpy - Entry point
 * @dest: a character
 * @src: a character
 * @n: an integer
 * Result: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
