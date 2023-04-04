#include "lists.h"
/**
 * listint_len - a function that returns the number of elements
 * in a linked listint_t list.
 * @h: node to be counted
 * Return: numbers os element in a node
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
