#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Lists all the natural numbers below 1024 (excluded)
 * that are multiples of 3 or 5.
 *
 * Return: Always 0.
 */
/* betty style doc for function main goes there */
int main(void)
{
unsigned long sum = 0;
unsigned long a = 1;
unsigned long b = 2;
unsigned long c = 0;
while (sum < 4000000)
{
sum = a + b;
a = b;
b = sum;
if ((sum % 2) == 0)
{
c = c + sum;
}
}
printf("%lu\n", c);
return (0);
}
