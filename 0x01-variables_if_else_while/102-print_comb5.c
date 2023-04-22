#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, j;
for (i = 0; i < 10 ; i++)
{
for (j = 0; j < i+2; j++)
{
putchar(48 + i);
putchar(48 + j);
putchar(' ');
}
if ((j != 9) || (i != 8))
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
