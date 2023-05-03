#include "main.h"

/**
 * puts_half -  prints half of a string
 * @str: string to print
 **/
void puts_half(char *str)
{
int n;
int i = 0;
int length = 0;
while (str[i] != '\0')
{
length++;
i++;
}
if ((length % 2) == 1)
{
n = (length - 1) / 2;
}
else
{
n = length / 2;
}
for (i = n; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
