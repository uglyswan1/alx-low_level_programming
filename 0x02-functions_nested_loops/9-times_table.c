#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */
/**
 * times_table - write the 9 times table
*/
/* betty style doc for function main goes there */
void times_table(void)
{
int i, j, k;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
k = i * j;
if (j != 9)
{
if (k <= 9)
{
_putchar(k + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else
{
_putchar(',');
_putchar(' ');
_putchar((k / 10) + '0');
_putchar((k & 10) + '0');
}
}
else
{
_putchar(k + '0');
}
}
_putchar('\n');
}
}
