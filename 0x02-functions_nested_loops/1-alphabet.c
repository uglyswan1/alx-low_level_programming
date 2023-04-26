#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: 'print_alphabet in lower case'
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
void print_alphabet(void)
{
int i;
for (i = 97; i <= 122; i++)
{
putchar(i);
}
putchar('\n');
}
