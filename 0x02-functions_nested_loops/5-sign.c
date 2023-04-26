#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */
/**
 * print_sign - checks the sign of a bumber
 * @n: is the number to be checked
 * Return: 1 if num is pos, and 0 if it equals 0, otherwise -1.
*/
/* betty style doc for function main goes there */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar('-');
return(1);
}
}
