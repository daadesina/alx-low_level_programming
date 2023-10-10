#include <stdio.h>
#include "main.h"

/**
 * _abs - chech Absolut value
 * @r: number
 *
 * Return: The absolut number
 */
int _abs(int r)
{
	if (r >= '0')
	{
		printf("%d\n", r);
	}
	else
	{
		int n = (-1 * r);
		printf("%d\n", n);
	}
}
