#include "lists.h"
/**
* sum_listint - calculate sum of data in a linked list
* @head: pointer to linked list
* Return: sum
*/
int sum_listint(listint_t *head)
{
int sumTotal = 0;
listint_t *current = head;
while (current)
{
sumTotal += current->n;
current = current->next;
}
return (sumTotal);
}
