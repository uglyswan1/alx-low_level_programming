#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to be printed 
 */
void print_rev(char *s)
{
while (*s != '\0')
{
s++;
}
if (*s == '\0')
{
s--;
while (*s != '\0')
{
_putchar(*s);
s--;
}
}
}
