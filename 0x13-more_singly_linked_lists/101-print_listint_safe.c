#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the head of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *node = head;
	const listint_t *visited[1024] = {NULL};
	unsigned int index;

	while (node != NULL)
	{
		for (index = 0; index < count; index++)
		{
			if (node == visited[index])
			{
				printf("-> [%p] %d\n", (void *)node, node->n);
				exit(98);
			}
		}
		visited[count] = node;
		count++;
		printf("[%p] %d\n", (void *)node, node->n);
		node = node->next;
	}
	return (count);
}
