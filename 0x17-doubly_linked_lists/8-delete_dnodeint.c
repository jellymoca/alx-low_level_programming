#include "lists.h"
#include <stdlib.h>

/**
* delete_dnodeint_at_index - delete node at index of dlistint_t
* @head: pointer to the head of the list
* @index: index of the node to be deleted
*
* Return: 1 if succeeded, -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current, *prev;
unsigned int i;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}

current = *head;
for (i = 0; current != NULL && i < index; i++)
{
prev = current;
current = current->next;
}

if (current == NULL)
return (-1);

prev->next = current->next;
if (current->next != NULL)
current->next->prev = prev;

free(current);
return (1);
}
