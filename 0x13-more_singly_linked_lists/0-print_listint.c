#include "lists.h"
/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: struct h
 * Return: number of element of the node
 */
size_t print_listint(const listint_t *h)
{
	size_t res = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		res++;
	}
	return (res);
}
