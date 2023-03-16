#include "lists.h"

/**
* sum_dlistint - Return the sum of all the data (n) of a dlistint_t linked list
* @head: Pointer to the head of the linked list
*
* Return: Sum of data (n) of a dlistint_t linked list, 0 if the list is empty
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *current = head;

while (current)
{
sum += current->n;
current = current->next;
}

return (sum);
}
