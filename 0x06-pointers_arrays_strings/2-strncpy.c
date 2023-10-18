#include "main.h"
#include <string.h>

/**
 * _strncpy - Entry point
 * @dest: a character
 * @src: a character
 * @n: an integer
 * Return: simple return
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
