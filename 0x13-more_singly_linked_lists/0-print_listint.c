#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all necessary elements
 * @h: linked list of type listint_t to print
 *
 * Return: figures of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t fig = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
fig++;
}
return (fig);
}
