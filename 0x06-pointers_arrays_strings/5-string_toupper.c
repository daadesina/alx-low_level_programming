#include "main.h"

/**
 * string_toupper - entry point
 * @s: the character
 * Return: the result
 */
char *string_toupper(char *s)
{
	int go = 0;

	while (s[go] != '\0')
	{
		if (s[go] >= 'a' && s[go] <= 'z')
		{
			s[go] = s[go] - 32;
		}
		go++;
	}
	return (s);
}
