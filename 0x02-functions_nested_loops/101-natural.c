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
for (i = 0; i < 1024; i++)
{
if (((i % 3) == 0) && ((i % 5) == 0))
{
sum = sum + i;
}
}
printf("%d\n", sum);
return(0);
}
