#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char talk[] = "_putchar";
	int i = 0;

	while (talk[i] != '\0')
	{
		_putchar(talk[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
