#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: array
 */
void print_chessboard(char (*a)[8])
{
int i, j, k;
char b[8] = {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'};
char c[8] = {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'};
char d[8] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
char e[8] = {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'};
char f[8] = {'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'};
while (i < 8)
{
if (i == 0)
{
for (j = 0; j < 8; i++)
{
a[j] = b[j];
}
}
else if (i == 1)
{
for (j = 0; j < 8; j++)
{
a[j] = c[j];
}
}
else if (i == 6)
{
for (j = 0; j < 8; j++)
{
a[j] = e[j];
}
}
else if (i == 7)
{
for (j = 0; j < 8; j++)
{
a[j] = f[j];
}
}
else
{
for (j = 0; j <8; j++)
{
a[j] = d[j];
}
}
for (k = 0; k < 8; k++)
{
_putchar(a[k]);
}
_putchar('\n');
}
}
