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
int sum = 0;
int a = 1;
int b = 2;
for (i = 0; i < 50; i++)
{
sum = a + b;
a = b;
b = sum;
}
printf("%d, ", sum);
return (0);
}
