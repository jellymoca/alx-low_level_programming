#include<stdio.h>
#include "lists.h"

/**
* listint_len - returns the number of elements in linked list
* @h: pointer to h
* Return: count
*/
size_t listint_len(const listint_t *h)
{
register size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
