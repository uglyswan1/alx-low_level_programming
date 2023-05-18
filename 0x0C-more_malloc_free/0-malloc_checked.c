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
int *all;
int i;
i = b;
all = malloc(sizeof(int) * i);
if (all == NULL)
{
return (i);
}
else
{
return (*all);
}
}
