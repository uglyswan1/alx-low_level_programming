#include "main.h"

/**
 * puts_half -  prints half of a string
 * @str: string to print
 **/
void puts_half(char *str)
{
int i = 0;
int length = 0;
while (str[i] != '\0')
{
length++;
i++;
}
if ((length % 2) == 1)
{
length = length - 1;
}
for (i = length / 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
