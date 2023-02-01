#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - delete the head node of linked list
* @head: double pointer to linked list
* Return: list data or 0
*/

int pop_listint(listint_t **head)
{
listint_t *current = *head;
int n = current->n;

if (*head == NULL)
return (0);

*head = (*head)->next;
free(current);
return (n);
}
