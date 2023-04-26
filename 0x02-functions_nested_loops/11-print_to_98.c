#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number where function starts
*/
/* betty style doc for function main goes there */
void print_to_98(int n)
{
if (n <= 98)
{
while (n <= 98)
{
printf("%d",n);
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
n++;
}
_putchar('\n');
}
else if (n >= 98)
{
while (n >= 98)
{
printf("%d",n);
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
n--;
}
_putchar('\n');
}
}
