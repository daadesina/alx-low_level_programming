#include "main.h"

/**
 * cap_string - Entry point
 * @s: a character
 * Return: the result
 */
char *cap_string(char *s)
{
	int go = 0;
	char spe[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '\"', '(', ')', '{', '}' };
	int goSpe = 0;
	
	while (s[go] != '\0')
	{
		if (go == 0 && s[go] >= 'a' && s[go] <= 'z')
		{
			s[go] = s[go] - 32;
		}
		while (goSpe <= 13)
		{
			if (s[go] == s[goSpe])
			{
				if (s[go + 1] >= 'a' && s[go + 1] <= 'z')
				{
					s[go + 1] = s[go + 1] - 32;
				}
			}
			goSpe++;
		}
		go++;
	}
	return (s);
}
