#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *strnew;
list_t *temp = *head;
unsigned int length = 0;
while (str[length])
{
length++;
}
strnew = malloc(sizeof(list_t));
if (!strnew)
{
return (NULL);
}
strnew->str = strdup(str);
strnew->length = len;
strnew->next = NULL;
if (*head == NULL)
{
*head = strnew;
return (strnew);
}
while (temp->next)
{
temp = temp->next;
}
temp->next = strnew;
return (strnew);
}
