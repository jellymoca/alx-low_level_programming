#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint_end - add node at end of linked list
* @head: double pointer to list
* @n: number of nodes to add
* Return: newNode or NULL
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode;
listint_t *current = *head;
newNode = malloc(sizeof(listint_t));
if (!newNode)
return (NULL);
newNode->n = n;
newNode->next = NULL;
if (*head == NULL)
{
*head = newNode;
return (newNode);
}
while (current->next)
current = current->next;
current->next = newNode;
return (newNode);
}
