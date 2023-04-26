#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */
/**
 * print to 98 - prints all natural numbers from n to 98
*/
/* betty style doc for function main goes there */
void print_to_98(int n)
{
while (n <= 98)
{
_putchar(n + '0');
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
n++;
}
while (n >= 98)
{
_putchar(n + '0');
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
n--;
}
_putchar('\n');
}
