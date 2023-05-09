#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
int i, j;
int sum = 0;
int sum2 = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
{
sum = sum + a[i][j];
}
}
}
for (i = size; i > 0; i--)
{
for (j = size; j > 0; j--)
{
if (i == j)
{
sum2 = sum2 + a[i][j];
}
}
}
printf("%d, %d", sum, sum2);
}
