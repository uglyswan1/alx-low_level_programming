#include "main.h"
int _sqrt_recursion_2(int n, int i);
/**
 * _sqrt_recursion - natural square root of a number
 * @n: the number
 * Return: sqaure root of n
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (_sqrt_recursion_2(n,0));
}
/**
 * _sqrt_recursion_2 - natural square root of a number
 * @n: the number
 * @i: the square
 * Return: sqaure root of n
 */
int _sqrt_recursion_2(int n, int i)
{
if ((n / i) == i)
{
return (i);
}
else
{
return (-1);
}
return _sqrt_recursion_2(n, i + 1);
}
