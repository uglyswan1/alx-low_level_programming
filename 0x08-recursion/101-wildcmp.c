#include "main.h"
int is_prime(char *s1, char *s2, int i, int j);
/**
 * wildcmp -  compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
return (is_prime(s1, s2, 0, 0));
}
/**
 * is_prime - returns 1 if the input integer is a prime number
 * @s1: string 1
 * @s2: string 2
 * @i: s1 iteration
 * @j: s2 iteration
 * Return: 1 or 0
 */
int is_prime(char *s1, char *s2, int i, int j)
{
if (s2[j] != '*')
{
return (is_prime(s1, s2, i, j + 1));
if (s1[i] == s2[j])
{
return (1);
return (is_prime(s1, s2, i + 1, j + 1));
}
else
{
return (0);
return (is_prime(s1, s2, i + 1, j));
}
}
else
return (is_prime(s1, s2, i, j + 1));
}
