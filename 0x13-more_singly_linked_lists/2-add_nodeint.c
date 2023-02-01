#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint - add node at beginning of linked list
* @head: double pointer to list
* @n: number of nodes to add
* Return: 0 new list
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode;
newNode = (listint_t *) malloc(sizeof(listint_t));
if (!newNode)
return (NULL);
newNode->n = n;
newNode->next = *head;
*head = newNode;
return (newNode);
}
