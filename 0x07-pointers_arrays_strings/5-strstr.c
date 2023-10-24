#include "main.h"
#include <string.h>

/**
 * _strstr - Entry point
 * @haystack: a character
 * @needle: a character
 *
 * Return: the resukt
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	i = strstr(haystack, needle);

	return (i);
}
