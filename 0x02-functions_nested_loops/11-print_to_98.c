#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 * @n: an integer
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 97)
		{
			printf("%d, ", n);
			n++;
		}
		printf("98");
	}
	else if (n == 98)
	{
		printf("0");
	}
	else
	{
		while (n >= 99)
		{
			printf("%d, ", n);
			n--;
		}
		printf("98");
	}
}
