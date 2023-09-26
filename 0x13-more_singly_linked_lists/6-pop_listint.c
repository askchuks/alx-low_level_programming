#include "lists.h"
#include <stdlib.h>
{
int n;
struct listint_s *next;
}
listint_t;
/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 *
 * Return:  data (n) of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
int memory = 0;
if (*head == NULL)
return (memory);
memory = (*head)->n;
listint_t *temp = *head;
*head = (*head)->next;
free(temp);
return (memory);
}
