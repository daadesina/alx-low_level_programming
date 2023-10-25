#include "main.h"

/**
 * _strlen_recursion - Entry point
 * @s: a character
 * Return: strlen[s]
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s != '\0')	
	{
		len = *s;
