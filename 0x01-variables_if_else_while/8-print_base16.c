#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = '0';
	int alph = 'A';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (alph <= 'F')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
