#include "main.h"

/**
 * reverse_array - Entry point
 * @a: an integer
 * @n: another integer
 * Return: Nothing to return
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	i = 0;
	j = n - 1;
	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
		i++;
	}
}
