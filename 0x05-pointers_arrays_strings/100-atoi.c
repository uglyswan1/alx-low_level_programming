#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 * Return: integer
 */
int _atoi(char *s)
{
int i, n, k;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= '0' && s[i] <= '9')
{
k = s[i];
if (s[i - 1] == '+')
{
n = k;
}
else if (s[i - 1] == '-')
{
n = -k;
}
}
else
{
return (0);
}
}
return (n);
}
