#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
* @head: pointer to the head node of the list
* @index: index of the node to be returned
*
* Return: pointer to the nth node, or NULL if it does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;

while (head && i < index)
{
head = head->next;
i++;
}

return (i == index ? head : NULL);
}
