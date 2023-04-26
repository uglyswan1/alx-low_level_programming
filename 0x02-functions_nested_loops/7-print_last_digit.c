#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */
/**
 * print_last_digit - prints last digit of number n
 * @n: is the number to be checked
 * Return: last digit of num.
*/
/* betty style doc for function main goes there */
int print_last_digit(int n)
{
int x;
if (n < 0)
{
n = -n;
}
x = n % 10;
if (x < 0)
{
x = -x;
}
putchar(x);
return (x);
}
