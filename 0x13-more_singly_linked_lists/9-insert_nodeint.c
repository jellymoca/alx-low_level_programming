#include "lists.h"
/**
* insert_nodeint_at_index - insert new node at index idx
* @head: pointer to linked list
* @idx: index to add node
* @n: data to insert in node
* Return: *newNode, or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *newNode;
listint_t *current = *head;
newNode = malloc(sizeof(listint_t));
if (!newNode || !head)
return (NULL);
newNode->n = n;
newNode->next = NULL;
if (idx == 0)
{
newNode->next = *head;
*head = newNode;
return (newNode);
}
for (i = 0; current && i < idx; i++)
{
if (i == idx - 1)
{
newNode->next = current->next;
current->next = newNode;
return (newNode);
}
else
current = current->next;
}
return (NULL);
}
