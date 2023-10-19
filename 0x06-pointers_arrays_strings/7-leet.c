#include "main.h"

/**
 * leet - Entry point
 * @s: a character
 * Return: a character
 */
char *leet(char *s)
{
	int go = 0;

	while (s[go] != '\0')
	{
		if (s[go] == 'a' || s[go] == 'A')
		{
			s[go] = '4';
		}
		else if (s[go] == 'e' || s[go] == 'E')
		{
			s[go] = '3';
		}
		else if (s[go] == 'o' || s[go] == 'O')
		{
			s[go] = '0';
		}
		else if (s[go] == 't' || s[go] == 'T')
		{
			s[go] = '7';
		}
		else if (s[go] == 'l' || s[go] == 'L')
		{
			s[go] = '1';
		}
		else
		{
			s[go] = s[go];
		}
		go++;
	}
	return (s);
}
