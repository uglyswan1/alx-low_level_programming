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
int i, j;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
if (i != 98)
printf("%d, ", i);
else if (i == 98)
printf("%d\n", i);
}
}
else if (n >= 98)
{
for (j = n; j >= 98; j--)
{
if (j != 98)
printf("%d, ", j);
else if (j == 98)
printf("%d\n", j);
}
}
}
