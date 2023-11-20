#include "main.h"

/**
 * print_listint - Entry point
 * @h: a constant
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	while (h != NULL)
	{
		return (h -> next);
		h = h -> next;
	}
}
