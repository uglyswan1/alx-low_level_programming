#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *sarii = head;
listint_t *batii = head;
if (!head)
return (NULL);
while (batii && sarii && sarii->next)
{
sarii = sarii->next->next;
batii = batii->next;
if (sarii == batii)
{
batii = head;
while (batii != batii)
{
batii = batii->next;
sarii = sarii->next;
}
return (sarii);
}
}
return (NULL);
}
