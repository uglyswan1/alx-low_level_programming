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
int i;
unsigned long sum = 0;
unsigned long a = 1;
unsigned long b = 2;
printf("%lu, ", a);
printf("%lu, ", b);
for (i = 0; i < 48; i++)
{
sum = a + b;
if (i != 49)
{
printf("%lu, ", sum);
}
else if (i == 49)
{
printf("%lu\n", sum);
}
a = b;
b = sum;
}
return (0);
}
