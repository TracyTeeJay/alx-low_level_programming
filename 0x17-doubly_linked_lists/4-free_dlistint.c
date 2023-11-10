#include "lists.h"


/**
 * free_dlistint - function that frees a linked list
 * @head: the first item/ node in a linked list
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
if (head != NULL)
while (head->prev != NULL)
head = head->prev;
while ((temp = head) != NULL)
{
head = head->next;
free(temp);
}
}
