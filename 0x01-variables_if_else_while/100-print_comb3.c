#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b = '0';

	while (b <= '9')
	{
		a = '0';
		while (a <= '9' && a != b)
		{
			putchar(a);
			putchar(b);
			a++;
			if (a < '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
		b++;
	}
	putchar('\n');
	return (0);
}
