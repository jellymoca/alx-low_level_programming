#include "lists.h"
/**
* free_listint2 - free a linked list
* @head: pointer to list to free
*/
void free_listint2(listint_t **head)
{
listint_t *current;
if (head == NULL)
return;
while (*head)
{
current = (*head)->next;
free(*head);
*head = current;
}
*head = NULL;
}
