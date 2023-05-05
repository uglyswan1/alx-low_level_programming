#include "main.h"
/**
 * infinite_add -  adds two numbers
 * @n1: input value 1
 * @n2: input value 2
 * @r: result
 * @size_r: result size
 * Return: r value
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
r = n1 + n2;
while (r[i] != '\0')
{
i++;
}
if (i > size_r)
{
return (0);
}
return (r);
}
