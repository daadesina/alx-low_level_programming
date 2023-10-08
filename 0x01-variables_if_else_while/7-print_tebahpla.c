#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char z = 122;

	while (z <= 122 && z >= 97)
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
