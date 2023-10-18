#include "main.h"
#include <string.h>

/**
 * *_strcat - Entry point
 * @dest: a character
 * @src: another character
 * Return: the result
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
