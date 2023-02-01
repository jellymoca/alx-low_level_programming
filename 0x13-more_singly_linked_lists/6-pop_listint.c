#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - delete the head node of linked list
* @head: double pointer to linked list
* Return: list data or 0
*/

int pop_listint(listint_t **head)
{
listint_t *current;
int num;
if (!head || !*head)
return (0);
num = (*head)->n;
current = (*head)->next;
free(*head);
*head = current;
return (num);
}
