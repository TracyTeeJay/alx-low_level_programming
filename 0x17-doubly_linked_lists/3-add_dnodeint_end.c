#include "lists.h"


/**
 * add_dnodeint_end - function to add node at the end of a linked list
 * @head: start of a linked list
 * @n: element value
 * Return: on success - address of new element, NULL if unsuccessful
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *hList, *newList;
newList = malloc(sizeof(dlistint_t));
if (newList == NULL)
return (NULL);
newList->n = n;
newList->next = NULL;
hList = *head;
if (hList != NULL)
{
while (hList->next != NULL)
hList = hList->next;
hList->next = newList;
}
else
*head = newList;
newList->prev = hList;
return (newList);
}
