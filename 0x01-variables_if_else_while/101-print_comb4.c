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
for (j = i + 1; j < 10; j++)
{
for (k = j + 1; k < 10; k++)
{
putchar(48 + i);
putchar(48 + j);
putchar(48 + k);
if ((j != 8) || (i != 7) || (k != 9))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
