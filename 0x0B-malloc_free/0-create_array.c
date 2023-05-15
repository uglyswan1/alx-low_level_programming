#include "main.h"
#include <stdio.h>

/**
 * create_array -  creates an array of char
 * @size: size of array
 * @c: the array of chars
 * Return: 0 or 1
 */

char *create_array(unsigned int size, char c)
{
int i = size;
int j = 0;
if (i == 0)
{
return (0);
}
while (j < i)
{
_putchar(c[j]);
}
return (0);
}
