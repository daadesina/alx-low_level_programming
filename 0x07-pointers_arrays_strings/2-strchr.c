#include "main.h"
#include <string.h>

/**
 * _strchr - Entry point
 * @s: a character
 * @c: another character
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{
	if (strchr(s, c) != NULL)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
