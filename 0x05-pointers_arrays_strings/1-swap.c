#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @n: integer number 1
 * @b: integer number 2
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
