#include "main.h"
int is_prime(int n, int i);
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: integer
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
return (is_prime(n, 2));
}
/**
 * is_prime - returns 1 if the input integer is a prime number
 * @n: integer
 * @i: recursion time
 * Return: 1 or 0
 */
int is_prime(int n, int i)
{
if ((n % i) == 0)
{
return (0);
}
else
{
return (1);
}
return (is_prime(n, i + 1));
}
