#include "main.h"

/**
 * main - Entry point
 * @argc: count
 * @argv: vector
 * Return: the result
 */
int main(int argc, char *argv[])
{
	int i = 0;
	char my[] = argv[0];

	while (my[i] != '\0')
	{
		_putchar(my[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
