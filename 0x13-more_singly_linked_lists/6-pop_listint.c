#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head: list pointer
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *new_temp = malloc(sizeof(listint_t));

	if (*head == NULL)
	{
		return (0);
	}
	new_temp = *head;
	data = new_temp->n;
	*head = (*head)->next;
	free (new_temp);
	return (data);
}
