#include "main.h"

/**
 * _isalpha - Check for alphabet
 * @c: any alphabet
 *
 * Return: 1 if alphabet, 0 if not alphabet
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) && (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
