#include "lists.h"
#include <stddef.h>
{
int n;
struct listint_s *next;
}
listint_t;
/**
* listint_len - Returns the number of elements in a linked listint_t list.
* @h: A pointer to the head of the linked list.
*
* Return: The figure (number) of elements in the list.
*/
size_t listint_len(const listint_t *h)
{
size_t fig = 0;
while (h != NULL)
{
fig++;
h = h->next;
return (fig);
}
}
