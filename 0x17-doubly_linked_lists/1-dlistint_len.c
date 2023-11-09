#include "lists.h"


/**
 * dlistint_len - function that gives number of elements in a linked list
 * @h: linked list element
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
int cnt = 0;
if (h == NULL)
return (cnt);
while (h->prev != NULL)
h = h->prev;
while (h != NULL)
{
cnt++;
h = h->next;
}
return (cnt);
}
