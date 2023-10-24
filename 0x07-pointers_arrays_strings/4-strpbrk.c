#include "main.h"
#include <string.h>

/**
 * _strpbrk - Entry point
 * @s: a character
 * @accept: anither character
 * Retern: the result
 */
char *_strpbrk(char *s, char *accept)
{
	int i = strpbrk(s, accept);

	if (i != NULL)
	{
		return (i);
	}
	else
	{
		return (NULL);
	}
}
