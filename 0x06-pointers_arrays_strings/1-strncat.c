#include "main.h"
#include <string.h>

/**
 * *_strncat - Entry point
 * @dest: a character
 * @src: another character
 * @n: an integer
 * Return: the result
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
