#include "lists.h"
/**
* delete_nodeint_at_index - delete node at linked list index idx
* @head: pointer to linked list
* @index: index of node to delete
* Return: 1 Success or -1 Fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *newNode = *head;
listint_t *current = NULL;
unsigned int i = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(newNode);
return (1);
}
while (i < index - 1)
{
if (!newNode || !(newNode->next))
return (-1);
newNode = newNode->next;
i++;
}
current = newNode->next;
newNode->next = current->next;
free(current);
return (1);
}
