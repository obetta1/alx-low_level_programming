#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list
 * @h: Pointer to the head of the list
 *
 * Return: Size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *node = *h;
	listint_t *temp;
	listint_t *visited[1024] = {NULL};
	unsigned int index;

	while (node != NULL)
	{
		for (index = 0; index < count; index++)
		{
			if (node == visited[index])
			{
				*h = NULL;
				return (count);
			}
		}
		visited[count] = node;
		count++;
		temp = node;
		node = node->next;
		free(temp);
	}
	*h = NULL;
	return (count);
}
