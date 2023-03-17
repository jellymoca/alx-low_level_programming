#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at a given position
* @h: double pointer to the head of the doubly linked list
* @idx: index of the list where the new node should be added
* @n: value to be stored in the new node
*
* Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *tmp;
unsigned int i;

if (!h)
return (NULL);

tmp = *h;
for (i = 0; tmp && i < idx; i++)
tmp = tmp->next;

if (i < idx)
return (NULL);

new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->prev = NULL;
new_node->next = *h;
if (*h)
(*h)->prev = new_node;
*h = new_node;
}
else
{
new_node->prev = tmp->prev;
new_node->next = tmp;
tmp->prev->next = new_node;
tmp->prev = new_node;
}

return (new_node);
}
