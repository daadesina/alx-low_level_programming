#include "main.h"

/**
 * _strlen - a character
 * @c: a character
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
