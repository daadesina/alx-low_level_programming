#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Alway 0 (Success)
 */
void print_alphabet(void)
{
	char a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
