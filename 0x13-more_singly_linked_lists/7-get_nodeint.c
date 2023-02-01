#include "lists.h"
#include <stdlib.h>

/**
* get_nodeint_at_index - return nth node of linked list
* @head: pointer to linked list
* @index: number of nodes
* Return: nth node or 0
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *current = head;
while (current && i < index)
{
current = current->next;
i++;
}
return (current ? current : NULL);
}
