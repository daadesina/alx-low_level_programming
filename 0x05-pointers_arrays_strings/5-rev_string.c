#include "main.h"

/**
 * rev_string - Entry point
 * @s: a string
 * Return: Nothing to return
 */
void rev_string(char *s)
{
	int real, roll;

	roll = 0;
	while (s[roll] != '\0')
	{
		s[roll];
		roll++;
	}
	real = roll - 1;
	while (real >= 0)
	{

		s[real];
		real--;
	}
}
