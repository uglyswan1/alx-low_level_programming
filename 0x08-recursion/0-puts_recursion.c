#include "main.h"
/**
 * _puts_recursion -  prints a string, followed by a new line
 * @s: the string
 */
void _puts_recursion(char *s)
{
int i = 0;
_putchar(s[i]);
i++;
_puts_recursion(s);
if(s[i] == '\0')
{
_putchar('\n');
}
}
