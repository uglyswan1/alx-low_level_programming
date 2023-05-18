#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked -  allocates memory using malloc
 * @b: integer
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *all;
all = malloc(b);
if (all == NULL)
{
exit(98);
}
else
{
return (all);
}
}
