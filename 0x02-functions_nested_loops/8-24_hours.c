#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * m: is the number of minutes. @s: is the number of seconds.
 * Return: 0.
*/
/* betty style doc for function main goes there */
void jack_bauer(void)
{
int m, s;
for (m = 0; m < 24; m++)
{
for (s = 0; s < 60; s++)
{
_putchar((m / 10) + 48);
_putchar((m % 10) + 48);
_putchar(':');
_putchar((s / 10) + 48);
_putchar((s % 10) + 48);
_putchar('\n');
}
}
}
