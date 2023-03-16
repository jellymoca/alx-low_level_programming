#include <stdlib.h>
#include "lists.h"

/**
* free_dlistint - Frees a doubly linked list.
* @head: A pointer to the head of the doubly linked list.
**/
void free_dlistint(dlistint_t *head)
{
dlistint_t *current = head, *tmp;

while (current)
{
tmp = current;
current = current->next;
free(tmp);
}
}
