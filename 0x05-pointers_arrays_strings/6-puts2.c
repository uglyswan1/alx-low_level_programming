#include "main.h"

/**
 * puts2  -  prints every other character of a string
 * @str: string to print
 */
void puts2(char *str)
{
int length = 0;
int j = 0;
while (str[j] != '\0')
{
length++;
j++;
}
for (j = 0; j < length; j = j + 2)
{
_putchar(str[j]);
}
_putchar('\n');
}
