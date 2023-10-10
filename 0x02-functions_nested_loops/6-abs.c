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
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		int n = (-1 * r);

		return (n);
	}
}
