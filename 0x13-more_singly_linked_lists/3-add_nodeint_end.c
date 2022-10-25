#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 *                   of a listint_t list
 * @head: A pointer to the address of
 *        the head of listint_t list
 * @n: The integer for the new node to contain
 *
 * Return: If the function fails - Null.
 *         Otherwise - the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nodes, *end;

	new_nodes = malloc(sizeof(listint_t));

	if (new_nodes == NULL)
		return (NULL);

	new_nodes->n = n;
	new_nodes->next = NULL;

	if (*head == NULL)
		*head = new_nodes;

	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new_nodes;
	}

	return (*head);
}
