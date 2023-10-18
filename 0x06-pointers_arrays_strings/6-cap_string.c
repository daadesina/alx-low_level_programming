#include "main.h"

/**
 * cap_string - Entry point
 * @s: a character
 * Return: the result
 */
char *cap_string(char *s)
{
	int go = 0;

	while (s[go] != '\0')
	{
		if (s[go] == ' ')
		{
			if (s[go + 1] >= 'a' && s[go + 1] <= 'z')
			{
				s[go + 1] = s[go + 1] - 32;
			}
		}
		else
		{
			s[go] = s[go];
		}
		go++;
	}
	return (s);
}
