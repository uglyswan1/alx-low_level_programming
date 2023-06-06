#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * Return: the data inside the elements that was deleted or 0
 */

int pop_listint(listint_t **head)
{
listint_t *zip;
int nbr;
if (!head || !*head)
return (0);
nbr = (*head)->n;
zip = (*head)->next;
free(*head);
*head = zip;
return (nbr);
}
