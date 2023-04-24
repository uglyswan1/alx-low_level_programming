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
int i, j, k;
for (i = 0; i < 10 ; i++)
{
for (j = 0; j < 10; j++)
{
if (j == 0)
{
k = 1;
}
else
{
k = 0;
}
for (k < 10; k++)
{
putchar(48 + i);
putchar(48 + j);
putchar(' ');
putchar(48 + j);
putchar(48 + k);
}
}
}
putchar('\n');
return (0);
}
