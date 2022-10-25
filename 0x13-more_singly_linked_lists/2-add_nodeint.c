#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 *               of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @n: The integer for the new node to contain
 *
 * Return: If the function fails - Null
 *         Otherwise - the address of the new elements
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nodes;

	new_nodes = malloc(sizeof(listint_t));

	if (new_nodes == NULL)
		return (NULL);

	new_nodes->n = n;
	new_nodes->next = *head;
	*head = new_nodes;

	return (new_nodes);
}
