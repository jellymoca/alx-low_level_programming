#include "lists.h"

/**
* add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
* @head: A pointer to a pointer to the first node of the list.
* @n: The integer to store in the new node.
*
* Return: If memory allocation fails or head is NULL, returns NULL.
*         Otherwise, returns a pointer to the new node.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *temp;

if (!head)
return (NULL);

new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (!*head)
{
new_node->prev = NULL;
*head = new_node;
}
else
{
temp = *head;
while (temp->next)
temp = temp->next;
temp->next = new_node;
new_node->prev = temp;
}

return (new_node);
}
