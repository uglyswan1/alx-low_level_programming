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
putchar(48 + i);
for (j = i + 1; j < 10; j++)
{
putchar(48 + j);
if (i < 8 && j < 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
