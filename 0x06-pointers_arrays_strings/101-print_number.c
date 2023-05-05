#include "main.h"
/**
 * print_number -  prints an integer
 * @n: input value
 */
void print_number(int n)
{
char i, k;
if (n < 0)
{
_putchar('-');
}
k = n;
for (i = '0'; i < '9'; i++)
{
if (k == i)
{
_putchar(k + '0');
}
}
if ((k / 10) != 0)
{
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
}
}
