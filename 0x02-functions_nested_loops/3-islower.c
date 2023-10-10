#include <stdio.h>
#include "main.h"

/**
 * _islower - check for the lower case character
 * @c: Alphabet
 *
 * Return: Always 1 (Success)
 */
int _islower(int c)
{
		if (c >= 97 && c <= 122)
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
