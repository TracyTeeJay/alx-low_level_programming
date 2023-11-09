#include "lists.h"

/**
 * add_dnodeint - function that adds an element at the beginning of a list
 * @head: beginning of node
 * @n: element value
 * Return: on success: address of new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newList, *hList;

newList = malloc(sizeof(dlistint_t));
if (newList == NULL)
return (NULL);

newList->n = n;
newList->prev = NULL;
hList = *head;

if (hList != NULL)
{
while (hList->prev != NULL)
hList = hList->prev;
}
newList->next = hList;
if (hList != NULL)
hList->prev = newList;
*head = newList;
return (newList);

}
