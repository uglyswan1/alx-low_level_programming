#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *strnew;
unsigned int len = 0;
while (str[len])
{
len++;
}
strnew = malloc(sizeof(list_t));
if (!strnew)
{
return (NULL);
}
strnew->str = strdup(str);
strnew->len = len;
strnew->next = (*head);
(*head) = strnew;
return (*head);
}
