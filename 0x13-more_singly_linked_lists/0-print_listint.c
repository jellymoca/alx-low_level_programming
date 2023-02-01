#include<stdio.h>
#include "lists.h"

/**
* print_listint - prints elements of a linked list
* @h: pointer to h
* Return: count
*/
size_t print_listint(const listint_t *h)
{
register size_t count = 0;
while (h)
{
printf("%i\n", h->n);
h = h->next;
count++;
}
return (count);
}
