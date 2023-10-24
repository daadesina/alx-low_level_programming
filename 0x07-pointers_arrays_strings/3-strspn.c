#include "main.h"
#include <string.h>

/**
 * _strspn - Entry point
 * @s: a charater
 * @accept: another character
 *
 * Return: the result
 */
unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);
	return (len);
}
