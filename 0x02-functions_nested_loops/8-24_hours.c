#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Return: Any value
 */
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d = '0';

	while (d <= '2')
	{
		c = '0';

		while (c <= '9')
		{
			b = '0';

			while (b <= '5')
			{
				a = '0';

				while (a <= '9')
				{
					_putchar(d);
					_putchar(c);
					_putchar(':');
					_putchar(b);
					_putchar(a);
					_putchar('\n');
					a++;
				}
				b++;
			}
			if (c == '3' && d == '2')
			{
				break;
			}
			c++;
		}
		d++;
	}
}
