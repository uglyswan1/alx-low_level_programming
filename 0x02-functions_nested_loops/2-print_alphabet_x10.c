#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line.
 */
/* betty style doc for function main goes there */
void print_alphabet_x10(void)
{
int i, j;
for (j = 0; j < 10; j++)
{
for (i = 97; i <= 122; i++)
{
putchar(i);
}
putchar('\n');
}
}
