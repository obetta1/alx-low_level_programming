#include "lists.h"
/**
 * print_list - a function that prints all the
 * elements of a list_t list.
 * @h: list pointer
 * Return: numbers of node
 */
size_t print_list(const list_t *h)
{
	size_t res = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h  = h->next;
			res++;
		}
		printf("[%d] %s\n", h->len, h->str);
		h  = h->next;
		res++;
	}
	return (res);
}
