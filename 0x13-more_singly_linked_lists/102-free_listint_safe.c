#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
size_t tol = 0;
int farq;
listint_t *zip;
if (!h || !*h)
return (0);
while (*h)
{
farq = *h - (*h)->next;
if (farq > 0)
{
zip = (*h)->next;
free(*h);
*h = zip;
tol++;
}
else
{
free(*h);
*h = NULL;
tol++;
break;
}
}
*h = NULL;
return (tol);
}
