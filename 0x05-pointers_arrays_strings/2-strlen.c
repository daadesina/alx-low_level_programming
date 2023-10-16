#include "main.h"

/**
 * _strlen - a character
 * @s: a character
 * Return: the result
 */
int _strlen(char *s)
{
	int myLenght = 0;

	while (s[myLenght])
	{
		myLenght++;
	}
	return (myLenght);
}
