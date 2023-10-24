#include "main.h"
#include <string.h>

/**
 * *_memcpy - copies memory area
 * @dest: memory area
 * @src: source
 * @n: length of src
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{			
	memcpy(dest, src, n);
	return (dest);
}
