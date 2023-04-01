#include "lists.h"
/**
 * list_len - function that returns the numbers of
 * elements of a list_t list.
 * @h: list pointer
 * Return: numbers of elements
 */
size_t list_len(const list_t *h)
{
	size_t res = 0;

	while (h != NULL)
	{
		h  = h->next;
		res++;
	}
	return (res);
}
