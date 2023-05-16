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
if ((j % 10) == 0)
{
_putchar(48);
_putchar('x');
_putchar(c + 48);
_putchar(' ');
_putchar('\n');
}
else
{
_putchar(48);
_putchar('x');
_putchar(c + '0');
_putchar(' ');
}
j++;
}
return (0);
}
